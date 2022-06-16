#!/bin/bash
PS3="enter a choice:"
select day in mon tue wed thur fri sat sun;
do 
echo "the day is $day"
done
