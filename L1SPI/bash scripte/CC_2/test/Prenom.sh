#!/bin/bash



if (test $# -ne 1) then 
	echo "pas content, il faut un paramètre"
	exit
fi

resultat=`grep -i  "$1" liste.bd`  
 
if (test -z $resultat) then 
	echo "il n'y a personne portant le prénom $1"
else
	N=`grep -i  "$1" liste.bd | cut -d"/" -f1 | tr [A-Z] [a-z] `
	echo "$1  : "
	echo "$N"| tr [\\n] [\ ]
fi
