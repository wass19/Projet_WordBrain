all : monprog

Outil.o : Outil.c 
	gcc -c Outil.c -Wextra
Tas.o : Tas.c 
	gcc -c Tas.c -Wextra
main.o : main.c
	gcc -c main.c -Wextra
monprog : main.o Outil.o Tas.o
	gcc -o monprog Outil.o Tas.o main.o -Wextra -lm
clean :
	rm -i fic1.o fic2.o fic3.o
