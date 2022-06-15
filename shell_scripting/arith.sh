#!/bin/bash

a=3
b=2
add=$(($a + $b))
sub=$(($a - $b))
mul=$(($a * $b))
square=$(($a ** $b))
echo "sum of a and b is $add"
echo "sub of a and b is $sub"
echo "mul of a and b is $mul"
echo "square of a and b is $square"
echo "10/3" | bc
echo "scale=3; 10/3" | bc
