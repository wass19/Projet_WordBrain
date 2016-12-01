#include "Outil.h"
#include "Tas.h"
#include "schema.h"

#define clear printf("\e[1;1H\e[2J")
void jouer_facile(int mat[10][10],char *mot4, char *mot5,char *R){//niveau de difficulté facile 4 grille de 2x2 et 6 de 4x4//
	int i;
	for(i=1;i<4;i++){
		clear;
		wb();
		printf("Niveau facile: %i/10\n",i);
		game_niveau2(mat,mot4,R);
	}
	for(i=4;i<10;i++){
		clear;
		wb();
		printf("Niveau facile: %i/10\n",i);
		game_niveau3(mat,mot4,mot5,R);
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau facile !~~\n");
	NiveauJeu();	
		
}
//
void jouer_moyen(int mat[10][10],char *mot4, char *mot5,char *R){
	int i;
	for(i=1;i<11;i++){
		printf("Niveau intermédiaire: %i/10\n",i);
		game_niveau3(mat,mot4,mot5,R);
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau intermédiaire !~~\n");
	NiveauJeu();
	
		
}
//
void jouer_difficile(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R){
	int i;
	for(i=1;i<3;i++){
		printf("Niveau difficile: %i/5\n",i);
		game_niveau3(mat,mot4,mot5,R);
	}
	for(i=3;i<6;i++){
		printf("Niveau difficile: %i/5\n",i);
		game_niveau4(mat,mot4,mot5,mot6,R);
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau difficile !~~\n");
	NiveauJeu();
	
		
}
//
void jouer_hardcore(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R){
	int i;
	for(i=1;i<3;i++){
		printf("Niveau hardcore: %i/5\n",i);
		game_niveau4(mat,mot4,mot5,mot6,R);
	}
	for(i=3;i<6;i++){
		printf("Niveau hardcore: %i/5\n",i);
		game_niveau5(mat,mot4,mot5,mot6,mot7,mot8,R);
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau Hardcore !~~\n");
	NiveauJeu();
}



void NiveauJeu(){
	int mat[10][10];
	char *mot4=malloc(1+4);
	char *mot5=malloc(1+5);
	char *mot6=malloc(1+6);
	char *mot7=malloc(1+7);
	char *mot8=malloc(1+8);
	char *R;
	int choix;	
	do{
		wb();
		printf("		 _________________________ \n");
		printf("		|                         |\n");  
		printf("		| 1 - Niveau Facile       |\n");//4 2x2 et 2 3x3
		printf("		| 2 - Niveau Intermédiaire|\n");//10 3x3
		printf("		| 3 - Niveau Difficile    |\n");//2 3x3 et 3 4x4
		printf("		| 4 - Niveau Hardcore     |\n");//2 4x4 et 3 5x5
		printf("		| 5 - retour              |\n");
		printf("		|_________________________|\n\n");
		printf("Votre choix : ");
		scanf("%i",&choix);

		
		switch(choix){	
			case 1 : clear;wb();jouer_facile(mat,mot4,mot5,R);break;
			case 2 : clear;wb();jouer_moyen(mat,mot4,mot5,R);break;
			case 3 : clear;wb();jouer_difficile(mat,mot4,mot5,mot6,R); break;
			case 4 : clear;wb();jouer_hardcore(mat,mot4,mot5,mot6,mot7,mot8,R);break;
			case 5 : clear; break;
			default: printf("Erreur: votre choix doit etre compris entre 1 et 3\n");
		}
}
	while(choix!=5);
	printf("Au revoir !\n");
	free(mot4);
	free(mot5);
	free(mot6);
	free(mot7);
	free(mot8);

}


