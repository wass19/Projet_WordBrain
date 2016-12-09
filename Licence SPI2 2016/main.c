#include "Outil.h"
#include "Tas.h"
#include "schema.h"
#define clear printf("\e[1;1H\e[2J");



int main2(){
	clear;
	int mat[10][10];
	char *mot4=malloc(1+4);
	char *mot5=malloc(1+5);
	char *mot6=malloc(1+6);
	char *mot7=malloc(1+7);
	char *mot8=malloc(1+8);
	char *R=malloc(1+25);
	int i=0;
	int j=0;
	srand(time(NULL));
	int choix;	
	do
	{
		wb();
		printf("		 _______________________________\n");
		printf("		|                         	|\n");  
		printf("		| 1 - Jouer               	|\n");
		printf("		| 2 - Choisir un niveau   	|\n");
		printf("		| 3 - Charger une sauvegarde    |\n");
		printf("		| 4 - Quitter             	|\n");
		printf("		|_______________________________|\n\n");
		printf("Votre choix : ");
		scanf("%i",&choix);

		
		switch(choix)
		{	case 1:clear;NiveauJeu();break;
			case 2:clear;Niveau();break;
			case 3:clear;wb();save_niveau2(mat,mot4,R);break;
			case 4:clear;break;
			default: printf("Erreur: votre choix doit etre compris entre 1 et 4\n");
		}
	}
	while(choix!=4);
	printf("Au revoir !\n");
	free(mot4);
	free(mot5);
	free(mot6);
	free(mot7);
	free(mot8);
	free(R);
	return 0;
}

void ModuleAmorceR(){
	//amorce tous les modules (code à exécuter une fois pour toutes AVANT d'utiliser un quelconque module depuis le main)
	OutilAMORCER();//NE PAS DECLASSER:doit toujours être appelé en premier
	//amorcer TOUS les modules autres que Outil mentionnés dans les include de main.c
		TasAMORCER();
}//ModuleAmorceR

int main(int argc, const char * argv[]) {
	Appel0("");//NE PAS TOUCHER; ce code doit toujours être placé au début du main
		ModuleAmorceR();//NE PAS TOUCHER; ce code doit toujours suivre immédiatement Appel0("")
		main2();
	Appel1("");//NE PAS TOUCHER; ce code doit toujours être placé à la fin du main, juste avant le return()
    return 0;
}
//main
