#!/bin/bash
cd archive_CC_2
#pour la concaténation:

cat F1.txt F2.txt F3.txt F4.txt F5.txt H1.txt H2.txt H3.txt H4.txt  > ~/Bureau/liste.bd

sort -t'/' -k2 liste.bd #pour ranger les prénoms
sort -t'/' -k1 liste.bd #pour ranger les noms
cat liste.bd | tr [A-Z] [a-z] #pour rendre tout minuscule
cat liste.bd | cut -d/ -f1,2,3,4  | tr [\/] [\ ] #on prend les 4 cas et remplacer "/" par " "





