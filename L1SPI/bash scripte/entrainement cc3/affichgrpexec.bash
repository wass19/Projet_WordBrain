#!/bin/bash

find ~/ -name $1 > toto
b=`cat toto` 
rm toto
cd $b
find ./ -perm -10 -print

