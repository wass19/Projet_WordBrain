#!/bin/bash


cat F1.txt  F2.txt F3.txt F4.txt F5.txt  H1.txt H2.txt H3.txt H4.txt > toto #pour la   concaténation de tous les fichiers de CC_2

sort -t'/' -k2 toto > tata  #pour ranger les prénoms
sort -t'/' -k1 tata > toto #pour ranger les noms
cat toto | tr [A-Z] [a-z] > tata #pour rendre tout minuscule
cat tata | cut -d/ -f1,2,3,4  | tr [\/] [\ ]  > list.bd #on prend les 4 champs et remplacer "/" par " "
rm toto
rm tata
