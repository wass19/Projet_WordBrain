all : monprog

Outil.o : Outil.c 
	gcc -c Outil.c -Wextra


Tas.o : Tas.c 
	gcc -c Tas.c -Wextra


schema.o: schema.c
	gcc -c schema.c -Wextra


main.o : main.c
	gcc -c main.c -Wextra

Jouer.o : Jouer.c
	gcc -c Jouer.c -Wextra

monprog : main.o Outil.o Tas.o schema.o Jouer.o
	gcc -o monprog Outil.o Tas.o schema.o main.o Jouer.o -Wextra -lm


clean :
	rm -i *.o
