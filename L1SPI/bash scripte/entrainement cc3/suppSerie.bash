#!/bin/bash
if (test $# -gt 2) then 
	echo "nombre de parametres incorrecte"
	exit
fi

if (test $1 -gt 5) then 
	echo "serie $1 incorrecte"
	exit
fi

sed -n -e '/[^:]*:[^'$1'][A-Z]:/ p' fich_test_sed  > $2

