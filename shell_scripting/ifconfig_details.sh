#!/bin/bash


#one=enp0s3
#two=enp0s8
#three=
if [ $1 = 'enp0s3' ]; then
	ifconfig enp0s3
fi
if [ $1 = 'enp0s8' ]; then
	ifconfig enp0s8
fi
if [ $1 = 'lo' ]; then
	ifconfig lo 
fi
if [ $1 = 'IP' ]; then
	ifconfig -a|awk '{print $1 " " $2}'|egrep -w 'Link|inet'|sed 's/ Link//'|sed 's/inet addr://'
fi
