#!/bin/bash

# Removing binaries
sudo rm /usr/local/bin/pcn*
sudo rm /usr/local/bin/polycube*

# Removing headers
sudo rm -rf /usr/include/polycube

# Removing libraries
for lib in $(ls /usr/lib | grep "libp"); do
    sudo rm /usr/lib/$lib
done
​
for lib in $(ls /usr/local/lib | grep "lib"); do
    sudo rm /usr/local/lib/$lib
done

for lib in $(ls /usr/lib/x86_64-linux-gnu/ | grep -P "libyang|libnl"); do
    sudo rm /usr/lib/x86_64-linux-gnu/$lib
done
​
for lib in $(ls /lib/x86_64-linux-gnu/ | grep -P "libnl"); do
    sudo rm /lib/x86_64-linux-gnu/$lib
done
sudo ldconfig