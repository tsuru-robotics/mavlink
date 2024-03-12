#!/usr/bin/env python

import os
import re
import argparse
import configparser
from enum import Enum, auto
from typing import Union, Tuple


CLASS_NAME_PATTERN: re.Pattern = re.compile(r'class\s+(\w+).*')
MAV_MSG_CLASS_PATTERN: re.Pattern = re.compile(r'class\s+(MAVLink_[\w_]+_message)\(MAVLink_message\):')
MAV_MAP_ENUM_ITEM_PATTERN: re.Pattern = re.compile(r'\s+([\w_]+): ([\w_]+),')
METHOD_NAME_PATTERN: re.Pattern = re.compile(r'\s+def\s+(\w+)\(self')

def is_class_line(line: str) -> bool:
    return line.startswith('class ')

def is_method_line(line: str) -> bool:
    return line.lstrip().startswith('def ')

def get_method_name(line: str) -> Union[str, None]:
    return METHOD_NAME_PATTERN.match(line).group(1)     

def method_to_msg_name(method_name: str) -> Union[str, None]:
    return f'MAVLink_{method_name.rstrip("_encode").rstrip("_send")}_message'

def is_mav_msg_class_line(line: str) -> bool:
    return bool(MAV_MSG_CLASS_PATTERN.match(line))

def get_class_name(line: str) -> Union[str, None]:
    match_obj = CLASS_NAME_PATTERN.match(line)
    if not match_obj:
        return None
    return match_obj.group(1)

def is_mav_map_enum_item(line: str) -> bool:
    return bool(MAV_MAP_ENUM_ITEM_PATTERN.match(line))

def get_mav_map_enum_value(line: str) -> Union[str, None]:
    return MAV_MAP_ENUM_ITEM_PATTERN.match(line).group(2)

def is_encode_or_send_method(line: str) -> bool:
    return line.endswith('_encode') or line.endswith('_send')

class State(Enum):
    INIT = auto()
    CLEAR_MSG_CLASSES = auto()
    CLEAR_MAVLINK_MAP = auto()
    WAIT_MAVLINK_CLASS = auto()
    CLEAR_MAVLINK_METHODS = auto()

class DialectParser:

    def __init__(self, white_list: Tuple[str] = ()):
        self.white_list = [msg_name.lower() for msg_name in white_list]
        self.state = State.INIT
        self.state_to_parser = {
            State.INIT: self._wait_mav_msg_classes,
            State.CLEAR_MSG_CLASSES: self._is_white_list_msg,
            State.CLEAR_MAVLINK_MAP: self._is_white_list_mav_map_item,
            State.WAIT_MAVLINK_CLASS: self._is_main_mav_class,
            State.CLEAR_MAVLINK_METHODS: self._is_white_list_method,
        }
        self._white_list_data = False

    def check_in_white_list(self, name: str) -> bool:
        return name.lower() in self.white_list

    def is_usefull(self, line: str) -> bool:
        return self.state_to_parser.get(self.state)(line)

    def _wait_mav_msg_classes(self, line: str) -> bool:
        if is_class_line(line) and is_mav_msg_class_line(line):
            self.state = State.CLEAR_MSG_CLASSES
            return self._is_white_list_msg(line)
        return True

    def _is_white_list_msg(self, line: str) -> bool:
        if line.startswith('mavlink_map: Dict[int, Type[MAVLink_message]]'):
            self.state = State.CLEAR_MAVLINK_MAP
            return True
        if is_class_line(line) and is_mav_msg_class_line(line):
            self._white_list_data = self.check_in_white_list(get_class_name(line))
        return self._white_list_data

    def _is_white_list_mav_map_item(self, line: str) -> bool:
        if is_mav_map_enum_item(line):
            return self.check_in_white_list(get_mav_map_enum_value(line))
        elif line.startswith('}'):
            self.state = State.WAIT_MAVLINK_CLASS
            return True
        return False

    def _is_main_mav_class(self, line: str) -> bool:
        if is_class_line(line) and get_class_name(line) == 'MAVLink':
            self.state = State.CLEAR_MAVLINK_METHODS
            self._white_list_data = True
            return True
        return True

    def _is_white_list_method(self, line: str) -> bool:
        if is_method_line(line) and is_encode_or_send_method(get_method_name(line)):
            self._white_list_data = self.check_in_white_list(
                method_to_msg_name(get_method_name(line))
            )
        return self._white_list_data


if __name__ == '__main__':
    arg_parser = argparse.ArgumentParser(
        prog='Cut Dialect',
        description='Create new dialect file with only messages from the white list',
    )
    arg_parser.add_argument(
        '-p',
        '--cuted_dialect_path',
        type=str,
        help='a directory path to the dialect file. Required.',
        required=True,
    )
    arg_parser.add_argument(
        '-c',
        '--config_path',
        type=str,
        nargs='?',
        default='cut_dialect_config.ini',
        help='a path to the config file. Default: cut_dialect_config.ini',
    )
    config = configparser.ConfigParser()
    args = arg_parser.parse_args()

    CUTED_DIALECT_DIR = os.path.dirname(args.cuted_dialect_path)
    assert os.path.exists(CUTED_DIALECT_DIR), f'Directory "{CUTED_DIALECT_DIR}" does not exist'
    assert os.path.exists(args.config_path), f'File "{args.config_path}" does not exist'

    config.read(args.config_path)

    dialect_parser = DialectParser(config.get('GENERAL', 'white_msg_list').split())

    with open(config.get('GENERAL', 'orig_dialect_file_path'), 'r', encoding='utf-8') as orig_dialect:
        with open(f'{CUTED_DIALECT_DIR}/kaiken.py', 'w', encoding='utf-8') as cuted_dialect:
            for line in orig_dialect:
                if not dialect_parser.is_usefull(line):
                    continue
                cuted_dialect.write(line)
