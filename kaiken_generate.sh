#!/bin/sh

Help()
{
   # Show Help
   echo "This script generates:"
   echo "- C-lib for the Kaiken dialect (/generated/mavlink_kaiken_v2)"
   echo "- Python-lib for the full Kaiken dialect (/generated/kaiken.py)"
   echo "- Python-lib for the lightweight kaiken dialect (/generated/kaiken_minimal.py) using whitelist from /cut_dialect_config.ini"
   echo "- html documentation for the Kaiken dialect (/doc/publish/kaikem.html)"
   echo "- Wireshark plugin (/generated/mavlink_kaiken_v2.lua) and saves it to Wireshark Plugin folder by default"
   echo
   echo "Syntax: kaiken_generate.sh [-h]"
   echo "-h     Print this Help"

}

while getopts ":h" option; do
   case $option in
      h) # display help
         Help
         exit;;
   esac
done

# Generate html for Kaiken dialect
cd doc
python mavlink_gitbook.py
mkdir -p publish
cp messages/_html/kaiken.html publish
cd ..

# Generate C-lib for Kaiken dialect
python -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml
# Overwrite message ID in generated C-lib
python ./kaiken_clib_overwrite.py -d generated/mavlink_kaiken_v2/kaiken

# Generate Python lib for the full Kaiken dialect
python -m pymavlink.tools.mavgen --lang=Python --wire-protocol=2.0 --output=generated/kaiken message_definitions/v1.0/kaiken.xml
# Overwrite message ID in generated Python-lib
python ./kaiken_pylib_overwrite.py -f $PWD/generated/kaiken.py

# Generate Python lib for the lightweight Kaiken dialect with only whitelist messages
python ./cut_mavlink_dialect.py -i ./generated/kaiken.py -p ./generated/
echo "Generated lightweight dialect generated/kaiken_minimal.py"

# Generate lib for Wireshark
python -m pymavlink.tools.mavgen --lang=WLua --wire-protocol=2.0 --output=generated/mavlink_kaiken_v2 message_definitions/v1.0/kaiken.xml

# Add trusted UDP ports
sed -i -e '$a\''udp_dissector_table:add(14560, mavlink_proto)' generated/mavlink_kaiken_v2.lua
sed -i -e '$a\''udp_dissector_table:add(14650, mavlink_proto)' generated/mavlink_kaiken_v2.lua
sed -i -e '$a\''udp_dissector_table:add(15550, mavlink_proto)' generated/mavlink_kaiken_v2.lua
sed -i -e '$a\''udp_dissector_table:add(17550, mavlink_proto)' generated/mavlink_kaiken_v2.lua

# Copy Lua script
if [ -z ${WIRESHARK_PLUGIN_FOLDER+x} ]
then
	echo Copying mavlink_kaiken_v2.lua to DEFAULT Wireshark plugin folder /usr/lib/x86_64-linux-gnu/wireshark/plugins
	sudo cp generated/mavlink_kaiken_v2.lua /usr/lib/x86_64-linux-gnu/wireshark/plugins/mavlink_kaiken_v2.lua
else
	echo Copying mavlink_kaiken_v2.lua to Wireshark plugin folder $WIRESHARK_PLUGIN_FOLDER.
	sudo /bin/cp -rf generated/mavlink_kaiken_v2.lua $WIRESHARK_PLUGIN_FOLDER/mavlink_kaiken_v2.lua
fi