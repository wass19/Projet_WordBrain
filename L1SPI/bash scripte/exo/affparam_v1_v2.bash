#!/bin/bash

echo "prmier test"
i=1
for param in $* ;do 
	echo "parametre $i = $param"
	i=`expr $i + 1`
done

echo "deuxieme test"
echo $* | tr [\ ] [\\n]

echo "troisieme test"
i=0
while (test $# -gt $i);do 
 	i=`expr $i + 1`
	eval "echo parametre $i = \$$i"
done

echo "quatrieme test"
i=0
while (test $# -gt 0);do
	i=`expr $i + 1	`
	echo "parametre $i = $1"	
	shift
done
