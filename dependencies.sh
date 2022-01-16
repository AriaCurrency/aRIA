#!/bin/bash

sudo apt-get update
sudo apt-get install git -y
sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils -y
sudo apt-get install libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev -y
sudo apt-get install libboost-all-dev -y

#BerkleyDB for wallet support
sudo apt-get install software-properties-common -y
sudo echo | sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install libdb4.8-dev libdb4.8++-dev -y


#upnp
sudo apt-get install libminiupnpc-dev -y

#ZMQ
sudo apt-get install libzmq3-dev -y

# QT
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler -y
sudo apt-get install libqt4-dev libprotobuf-dev protobuf-compiler -y

wget http://files.virt2real.ru/packages/buildroot/miniupnpc-1.8.tar.gz


tar -xvf miniupnpc-1.8.tar.gz


cd miniupnpc-1.8 &&  make 

sudo  make install 

cd ..

rm -rf miniupnpc-1.8 miniupnpc-1.8.tar.gz
