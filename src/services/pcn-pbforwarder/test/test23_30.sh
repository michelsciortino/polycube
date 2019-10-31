#!/bin/bash

source "${BASH_SOURCE%/*}/helpers.bash"

function pbfeanup {
  set +e
  del_pbforwarders 1
  del_veths 2
}
trap pbfeanup EXIT

set -x
set -e

# setup
create_veth 2

add_pbforwarders 1

pbforwarder_add_port pbf1 veth1
pbforwarder_add_port pbf1 veth2

# Add a bunch of not meaningful rules
pbforwarder_add_rules_l2 0  13 pbf1
pbforwarder_add_rules_l3 13 26 pbf1

# Get the MAC addresses of the namespaces
veth1_mac=`LANG=C sudo ip netns exec ns1 ifconfig -a | grep -Po 'ether \K.*$'`
veth2_mac=`LANG=C sudo ip netns exec ns2 ifconfig -a | grep -Po 'ether \K.*$'`

# This should be matched on Echo Request
polycubectl pbforwarder pbf1 rules add 26 src_ip=10.0.0.1 dst_ip=10.0.0.2 action=FORWARD out_port=veth2

# This should be matched on Echo Reply
polycubectl pbforwarder pbf1 rules add 27 src_ip=10.0.0.2 dst_ip=10.0.0.1 action=FORWARD out_port=veth1

# Allows ns1->ns2 ARP Request
polycubectl pbforwarder pbf1 rules add 28 dst_mac=FF:FF:FF:FF:FF:FF action=FORWARD out_port=veth2

# Allows ns2->ns1 ARP Response
polycubectl pbforwarder pbf1 rules add 29 dst_mac=$veth1_mac action=FORWARD out_port=veth1

sudo ip netns exec ns1 ping 10.0.0.2 -c 2


