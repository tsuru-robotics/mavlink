#!/bin/bash

# Generate C-lib
python3 -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Overwrite message ID in generated C-lib
python3 ./kaiken_clib_overwrite.py -d generated/mavlink_kaiken_v2/kaiken
# Generate python lib
python3 -m pymavlink.tools.mavgen --lang=Python --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Generate lib for Wireshark
python3 -m pymavlink.tools.mavgen --lang=WLua --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Install generated python libs
cd pymavlink
python setup.py install
cd ../