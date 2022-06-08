#!/bin/sh

a=10

until [ $a -lt 2 ]
do
   echo $a
   a=`expr $a + 1`
done
