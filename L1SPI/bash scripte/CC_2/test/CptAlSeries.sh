#!/bin/bash

if (test 1 -gt $#) then
echo " nombre de parametres incorrect"
fi


if (test $# -gt 5) then
echo " numéro de série incorrect "
fi

if (test -z $#  ) then 
echo " nombre de paramètre incorrecte"
fi

#série 1
a=`cut -d/ -f3 liste.bd | grep -i 1i liste.bd | wc -l`
b=`cut -d/ -f3 liste.bd | grep -i 1n liste.bd | wc -l`
c=`expr $a + $b`
echo " -série 1:	$c persones"

#serie 2
d=`cut -d/ -f3 liste.bd | grep -i 2a liste.bd | wc -l`
e=`cut -d/ -f3 liste.bd | grep -i 2b liste.bd | wc -l`
f=`cut -d/ -f3 liste.bd | grep -i 2c liste.bd | wc -l`
g=`cut -d/ -f3 liste.bd | grep -i 2d liste.bd | wc -l`
h=`expr $d + $e + $f + $g`
echo " -série 2:	$h persones"

#serie 3
i=`cut -d/ -f3 liste.bd | grep -i 3a liste.bd | wc -l`
j=`cut -d/ -f3 liste.bd | grep -i 3b liste.bd | wc -l`
k=`cut -d/ -f3 liste.bd | grep -i 3c liste.bd | wc -l`
l=`cut -d/ -f3 liste.bd | grep -i 3d liste.bd | wc -l`
m=`expr $i + $j + $k + $l`
echo " -série 3:	$m personnes"


#serie 4
n=`cut -d/ -f3 liste.bd | grep -i 4a liste.bd | wc -l`
o=`cut -d/ -f3 liste.bd | grep -i 4b liste.bd | wc -l`
p=`cut -d/ -f3 liste.bd | grep -i 4c liste.bd | wc -l`
q=`cut -d/ -f3 liste.bd | grep -i 4d liste.bd | wc -l`
r=`expr $n + $o + $p + $q`
echo " -série 4:	$r personnes"



#serie 5
s=`cut -d/ -f3 liste.bd | grep -i 5a liste.bd | wc -l`
t=`cut -d/ -f3 liste.bd | grep -i 5b liste.bd | wc -l`
u=`cut -d/ -f3 liste.bd | grep -i 5c liste.bd | wc -l`
v=`cut -d/ -f3 liste.bd | grep -i 5d liste.bd | wc -l`
w=`expr $s + $t + $u + $v`
echo " -série 5:	$w personnes"

