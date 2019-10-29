#!/bin/bash
container="polycubed"
if ! test -z "$1"
then
    container=$1
fi
# Copying binaries
sudo docker cp -a $container:/usr/local/bin /usr/local
# Copying headers
sudo mkdir -p /usr/include/polycube
sudo docker cp -a $container:/usr/include/polycube /usr/include
# Copying libraries
for lib in $(docker exec $container ls /usr/lib | grep "libp"); do
    sudo docker cp $container:/usr/lib/$lib /usr/lib/
done
ldconfig -n /usr/lib
for lib in $(docker exec $container ls /usr/local/lib | grep "lib"); do
    sudo docker cp $container:/usr/local/lib/$lib /usr/local
done
ldconfig -n /usr/local/lib
for lib in $(docker exec $container ls /usr/lib/x86_64-linux-gnu/ | grep -P "libyang|libnl"); do
    sudo docker cp $container:/usr/lib/x86_64-linux-gnu/$lib /usr/lib/x86_64-linux-gnu
done
for lib in $(docker exec $container ls /lib/x86_64-linux-gnu/ | grep -P "libnl"); do
    sudo docker cp $container:/lib/x86_64-linux-gnu/$lib /lib/x86_64-linux-gnu
done
