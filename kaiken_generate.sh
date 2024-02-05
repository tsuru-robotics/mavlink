#!/bin/bash

# Generate html for Kaiken dialect
cd doc && python3 mavlink_gitbook.py
mkdir -p publish
cp messages/_html/kaiken.html publish
cd ../

# Generate C-lib
python3 -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Overwrite message ID in generated C-lib
python3 ./kaiken_clib_overwrite.py -d generated/mavlink_kaiken_v2/kaiken
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
# Generate lib for Wireshark
python3 -m pymavlink.tools.mavgen --lang=WLua --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Copy Lua script
sudo cp generated/mavlink_kaiken_v2.lua /usr/lib/x86_64-linux-gnu/wireshark/plugins/mavlink_kaiken_v2.lua 
