#!/bin/bash


if (test $# -ne 1) then 
	echo "il faut rentrer un Nom SVP!!!"
	exit
fi

resultat=`grep -i  "$1" liste.bd`  
 
if (test -z "$resultat") then
	echo "il n'y a personne portant le prénom $1"
else
	Nom=`grep -i  "$1" liste.bd | cut -d" " -f1 | tr [A-Z] [a-z] `
	echo "$1  : "
	echo "$Nom"| tr [\\n] [\ ]
	echo " " | tr [\ ] [\\n]
fi
