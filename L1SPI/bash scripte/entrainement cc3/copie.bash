#!/bin/bash

if (test $# -gt 3) then 
	echo "nombre de parametres incorrecte"
	exit
fi

if (test $1 == H -a $2 -gt 5) then 
	echo "nombre de série incorrecte"
	exit
fi

if (test $1 == F -a $2 -gt 4) then 
	echo "nombre de série incorrecte"
	exit
fi

if ( test $1 != H -a $1 != F) then 
	echo "le genre n'est pas incorrecte"
	exit
fi


sed -n -e'/[^:]*:'$2'[A-Z]:[^:]*:[^:]*:'$1':/p' fich_test_sed > $3
