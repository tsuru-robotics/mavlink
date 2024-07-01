#!/bin/sh

Help()
{
   # Show Help
   echo "This script generates full Kaiken dialect and reinstalles system pymavlink package"
   echo
   echo "Syntax: kaiken_update_pymavlink.sh [-h]"
   echo "-h     Print this Help"

}

while getopts ":h" option; do
   case $option in
      h) # display help
         Help
         exit;;
   esac
done

# Update installed pymavlink and mavutil
pip uninstall -y pymavlink
cd pymavlink
python setup.py install
cd ..

# Overwrite message ID in generated Python-lib
pymavlink_path=$(pip show pymavlink | sed -n 's/.*Location://p')/pymavlink
python ./kaiken_pylib_overwrite.py -f ${pymavlink_path}/dialects/v20/kaiken.py
# Fix mavutil.py
python ./kaiken_mavutil_overwrite.py -f ${pymavlink_path}/mavutil.py
echo "Done"