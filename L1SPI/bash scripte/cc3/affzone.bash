#!/bin/bash

#find ~/ -name $1 > toto
#b=`cat toto` 
#rm toto
#cd $b
a=`sed -n -e "\$2,\$3 p" $1`

echo $a | tr [\ ] [\\n] 

