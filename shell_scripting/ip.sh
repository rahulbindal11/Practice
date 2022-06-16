#!/bin/bash
interfaces=$(/sbin/ifconfig |grep -e ^[a-z] |  awk '{ printf $1 " "}')
for i in $interfaces
do
    addr=$(/sbin/ifconfig $i | grep 'inet addr:' | cut -d: -f2 | awk '{ print $1}')
    addr6=$(/sbin/ifconfig $i | grep 'inet6 addr:' |sed 's/   *//g'| cut -d' ' -f3 | cut -d'/' -f1)
    echo "$i  inet4 $addr    inet6 $addr6"
done
