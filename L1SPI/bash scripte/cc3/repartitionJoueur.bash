#!/bin/bash

i=1
while (test $i -lt 5)do
	sed -n -e'/[^:]*:'$i'[A-Z]:[^:]*:[^:]*:F:/p' fich_test_sed > F_$i
	i=`expr $i + 1`
	
done

n=1
while (test $n -lt 6)do
	sed -n -e'/[^:]*:'$n'[A-Z]:[^:]*:[^:]*:H:/p' fich_test_sed > H_$n
	n=`expr $n + 1`
done
