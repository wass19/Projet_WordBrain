#!/bin/bash

if (test $# -ne 1) then 
	echo "pas content, il faut un paramètres"
	exit
fi


resultat=`grep -i  "$1" liste.bd`  
 
if (test -z $resultat) then 
	echo "il y a 0 $1 dans la base" 
else
	p=`grep -i  "$1" liste.bd | cut -d"/" -f1 | wc -l`  
	
	echo "il ya $p $1 dans la base "
fi

