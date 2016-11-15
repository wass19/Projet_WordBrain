#!/bin/bash

i=1
for param in $* ;do 
	echo "parametre $i = $param"
	i=`expr $i + 1`
done

