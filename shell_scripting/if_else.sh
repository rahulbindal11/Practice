#!/bin/bash

if [[ 2 -eq 1 ]]; then 
	echo test1 passed
elif [[ 1 -eq 1 ]]; then
	echo test2 passed
else
	echo test failed
fi
