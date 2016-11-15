#!/bin/bash
if (test $# -ne 2) then 
	echo "pas content, il faut deux paramètres"
	exit
fi

resultat=`grep -i  "$1:$2" fich_test_awk`  
 
if (test -z $resultat) then 
	echo "La personne n'existe pas dans ce fichier" 
else
	l=`grep -i  "$1:$2" fich_test_awk | cut -d":" -f7`  
	a=`grep -i  "$1:$2" fich_test_awk | cut -d":" -f5`
	c=`grep -i  "$1:$2" fich_test_awk | cut -d":" -f3`
	r=`grep -i  "$1:$2" fich_test_awk | cut -d":" -f4`	
	g=`grep -i  "$1:$2" fich_test_awk | cut -d":" -f6`

	#	if (test $s -eq H) then
	#		s="Masculin"
	#	else 
	#	        s="Feminin"
	#	fi
	echo "$1 $2 :Numero de licence = $l ,Numero d'association = $a ,Classement = $c ,Rang =  $r ,Genre = $g" | tr [\:] [\\n] | tr [\,] [\\n] 
fi

