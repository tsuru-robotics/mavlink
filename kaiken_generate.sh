#!/bin/bash

# Generate C-lib
python3 -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Overwrite message ID in generated C-lib
python3 ./kaiken_clib_overwrite.py -d generated/mavlink_kaiken_v2/kaiken
# Generate lib for Wireshark
python3 -m pymavlink.tools.mavgen --lang=WLua --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Generate Python libs and reinstall pymavlink
pip uninstall pymavlink
cd pymavlink
python setup.py install
cd ../
# Overwrite message ID in generated Python-lib
pymavlink_path=$(pip show pymavlink | sed -n 's/.*Location://p')/pymavlink
python3 ./kaiken_pylib_overwrite.py -d ${pymavlink_path}/dialects/v20
# Fix mavutil.py
python3 ./kaiken_mavutil_overwrite.py -d ${pymavlink_path}
