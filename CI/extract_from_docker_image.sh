#!/bin/bash
container="polycubed"
if ! test -z "$1"
then
    container=$1
fi
# Copying binaries
echo "Copying $container:/usr/local/bin to /usr/local"
sudo docker cp -a $container:/usr/local/bin /usr/local
# Copying headers
echo "Copying $container:/usr/include/polycube to /usr/include"
sudo mkdir -p /usr/include/polycube
sudo docker cp -a $container:/usr/include/polycube /usr/include
# Copying libraries
for lib in $(docker exec $container ls /usr/lib | grep "libp"); do
    echo "Copying $container:/usr/lib/$lib to /usr/lib/"
    sudo docker cp $container:/usr/lib/$lib /usr/lib/
done
ldconfig -n /usr/lib
for lib in $(docker exec $container ls /usr/local/lib | grep "lib"); do
    echo "Copying $container:/usr/local/lib/$lib to /usr/local/lib"
    sudo docker cp $container:/usr/local/lib/$lib /usr/local/lib
done
ldconfig -n /usr/local/lib
for lib in $(docker exec $container ls /usr/lib/x86_64-linux-gnu/ | grep -P "libyang|libnl"); do
    echo "Copying $container:/usr/lib/x86_64-linux-gnu/$lib to /usr/lib/x86_64-linux-gnu"
    sudo docker cp $container:/usr/lib/x86_64-linux-gnu/$lib /usr/lib/x86_64-linux-gnu
done
for lib in $(docker exec $container ls /lib/x86_64-linux-gnu/ | grep -P "libnl"); do
    echo "Copying $container:/lib/x86_64-linux-gnu/$lib to /lib/x86_64-linux-gnu"
    sudo docker cp $container:/lib/x86_64-linux-gnu/$lib /lib/x86_64-linux-gnu
done
# Copying base yang models
sudo mkdir -p /usr/local/include/polycube
echo "Copying $container:/usr/local/include/polycube to /usr/local/include/"
sudo docker cp -a $container:/usr/local/include/polycube /usr/local/include/
sudo ldconfig -n /usr/local/include/
​