#!/bin/sh

# Generate html for Kaiken dialect
cd doc
python mavlink_gitbook.py
mkdir -p publish
cp messages/_html/kaiken.html publish
cd ..

# Generate C-lib
python -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Overwrite message ID in generated C-lib
python ./kaiken_clib_overwrite.py -d generated/mavlink_kaiken_v2/kaiken

# Generate Python libs and reinstall pymavlink
pip uninstall -y pymavlink
cd pymavlink
python setup.py install
cd ..

# Overwrite message ID in generated Python-lib
pymavlink_path=$(pip show pymavlink | sed -n 's/.*Location://p')/pymavlink
python ./kaiken_pylib_overwrite.py -d ${pymavlink_path}/dialects/v20

# Fix mavutil.py
python ./kaiken_mavutil_overwrite.py -d ${pymavlink_path}

# Generate lib for Wireshark
python -m pymavlink.tools.mavgen --lang=WLua --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml

# Copy Lua script
if [ -z "${WIRESHARK_PLUGIN_FOLDER+x}" ]
then
	echo Copying mavlink_kaiken_v2.lua to Wireshark plugin folder $WIRESHARK_PLUGIN_FOLDER
	sudo /bin/cp -rf generated/mavlink_kaiken_v2.lua $WIRESHARK_PLUGIN_FOLDER/mavlink_kaiken_v2.lua
else
	echo Copying mavlink_kaiken_v2.lua to Wireshark plugin folder /usr/lib/x86_64-linux-gnu/wireshark/plugins
	sudo cp generated/mavlink_kaiken_v2.lua /usr/lib/x86_64-linux-gnu/wireshark/plugins/mavlink_kaiken_v2.lua
fi