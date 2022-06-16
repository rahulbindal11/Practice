#!/bin/bash

if [[ $# -ne 2 ]]; then
	echo "you don't enter exactly 2 parameters"
	echo "usageL $0 <file1> <file2>"
	exit 1
fi
