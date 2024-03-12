#!/bin/sh

Help()
{
   # Show Help
   echo "This script generates:"
   echo "- C-lib for the Kaiken dialect."
   echo "- Python-lib for the full Kaiken dialect."
   echo "- Cuted kaiken dialect and put it into build folder."
   echo "- html documentation for the Kaiken dialect."
   echo "- Wireshark plugin folder"
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

# Generate cuted kaiken dialect
# with only whitelist messages
echo "Generating cuted kaiken dialect"
python ./cut_mavlink_dialect.py -p ./build/
echo "Cuted kaiken dialect generated"

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