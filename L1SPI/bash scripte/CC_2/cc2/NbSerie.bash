#!/bin/bash

if (test 1 -gt $#) then
	echo " nombre de parametres incorrect"
	exit
fi

if (test 5 -ge $#) then
	echo " numéro de serie incorrect "
	
fi

if(test $1 -eq 1) then
	a=`cut -d' ' -f3 liste.bd | grep -i 1i liste.bd | wc -l`
	b=`cut -d' ' -f3 liste.bd | grep -i 1n liste.bd | wc -l`
	c=`expr $a + $b`
	echo " -série $1:	$c persones"
fi

if(test $1 -eq 2) then
	a=`cut -d' ' -f3 liste.bd | grep -i 2a liste.bd | wc -l`
	b=`cut -d' ' -f3 liste.bd | grep -i 2b liste.bd | wc -l`
	c=`cut -d' ' -f3 liste.bd | grep -i 2c liste.bd | wc -l`
	d=`cut -d' ' -f3 liste.bd | grep -i 2d liste.bd | wc -l`
	e=`expr $a + $b + $c + $d`

echo " -série $1:	$e persones"
fi

if(test $1 -eq 3) then
	a=`cut -d' ' -f3 liste.bd | grep -i 3a liste.bd | wc -l`
	b=`cut -d' ' -f3 liste.bd | grep -i 3b liste.bd | wc -l`
	c=`cut -d' ' -f3 liste.bd | grep -i 3c liste.bd | wc -l`
	d=`cut -d' ' -f3 liste.bd | grep -i 3d liste.bd | wc -l`
	e=`expr $a + $b + $c + $d`

	echo " -série $1:	$e persones"
fi


if(test $1 -eq 4) then
	a=`cut -d' ' -f3 liste.bd | grep -i 4a liste.bd | wc -l`
	b=`cut -d' ' -f3 liste.bd | grep -i 4b liste.bd | wc -l`
	c=`cut -d' ' -f3 liste.bd | grep -i 4c liste.bd | wc -l`
	d=`cut -d' ' -f3 liste.bd | grep -i 4d liste.bd | wc -l`
	e=`expr $a + $b + $c + $d`

	echo " -série $1:	$e persones"
fi

if(test $1 -eq 5) then
	a=`cut -d' ' -f3 liste.bd | grep -i 5a liste.bd | wc -l`
	b=`cut -d' ' -f3 liste.bd | grep -i 5b liste.bd | wc -l`
	c=`cut -d' ' -f3 liste.bd | grep -i 5c liste.bd | wc -l`
	d=`cut -d' ' -f3 liste.bd | grep -i 5d liste.bd | wc -l`
	e=`expr $a + $b + $c + $d`

	echo " -série $1:	$e persones"
fi


