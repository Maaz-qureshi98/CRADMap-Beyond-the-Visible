#!/bin/bash
set -v
set -e

DISCOVERY_SERVER_IP=$(curl -s https://robohub.eng.uwaterloo.ca//share/connected_robotics_discovery_server.txt)
echo "Got discovery server ip: $DISCOVERY_SERVER_IP"
IP=$(ip -6 -o addr show $(ls -1 /sys/class/wwan/wwan0/device/net) -dynamic | tr -s ' ' | cut -d ' ' -f 4 | cut -d '/' -f 1)
echo "Got interface ip: $IP"
echo "s/MYIP/$IP/"
echo "s/DISCOVERY_SERVER_IP/$DISCOVERY_SERVER_IP/"
cat /etc/fastdds_rpi.xml.template | sed "s/MYIP/$IP/" | sed "s/DISCOVERY_SERVER_IP/$DISCOVERY_SERVER_IP/" | sudo tee /etc/fastdds_rpi.xml
sudo systemctl restart turtlebot4
