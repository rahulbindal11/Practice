#! /bin/bash
echo "HELLO WORLD"

echo $BASH
echo $PWD

name=rahul

echo my name is $name

echo "my name is "
read=name
echo my name is : $name

read -p 'username :' myusername
echo "username : $myusername"

read -a 'username :' mysurname
echo "username : $mysurname"
echo "today date is 'date'"
