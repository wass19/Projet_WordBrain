#include "Outil.h"
#include "Tas.h"
#include "schema.h"

#define clear printf("\e[1;1H\e[2J")

/**
	* \file Jouer.c
	* \brief Jouer de façon continu
	* \author OKTAY Samed / MESSAGIER Ouassim / LARMIGNAT Thomas
	* \version 2.0
	* \date 16 decembre 2016 
	*/
/**
 * \fn void jouer_facile(int mat[10][10],char *mot4, char *mot5,char *R)
 * \brief niveau de difficulté facile 4 grilles de 2x2 et 6 grilles de 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot 
 * \param mot5 Deuxieme mot
 * \param R Concatenation des deux mots
 */

void jouer_facile(int mat[10][10],char *mot4, char *mot5,char *R,int continu){//niveau de difficulté facile 4 grilles de 2x2 et 6 grilles de 3x3////
	int i;
	int stage=1;
	int niveau=1;
	for(i=1;i<4;i++){//4 grilles 2x2//
		clear;
		wb();
		game_niveau2(mat,mot4,R,continu,niveau,stage);
		stage++;
	}
	for(i=4;i<10;i++){// 6 grilles 3x3//
		clear;
		wb();
		game_niveau3(mat,mot4,mot5,R,continu,niveau,stage);//appel fonction de schema.h//
		stage++;
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau facile !~~\n");//retour menu "jouer"//
	NiveauJeu();	
		
}


/**
 * \fn void jouer_moyen(int mat[10][10],char *mot4, char *mot5,char *R)
 * \brief niveau de difficulté moyen
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot 
 * \param mot5 Deuxieme mot
 * \param R Concatenation des deux mots
 */

void jouer_moyen(int mat[10][10],char *mot4, char *mot5,char *R,int continu){//niveau moyen//
	int i;
	int stage=1;
	int niveau=2;
	for(i=1;i<11;i++){// 10 grilles de 3x3
		
		game_niveau3(mat,mot4,mot5,R,continu,niveau,stage);
		stage++;
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau intermédiaire !~~\n");//retour menu "jouer"//
	NiveauJeu();
}

/**
 * \fn void jouer_difficile(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R)
 * \brief niveau de difficulté difficile
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot 
 * \param mot5 Deuxieme mot
 * \param mot6 Troisieme mot
 * \param R Concatenation des trois mots
 */

void jouer_difficile(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R,int continu){//niveau difficile//
	int i;
	int niveau=3;
	int stage=1;
	for(i=1;i<3;i++){//2 nvx 3x3//
		
		game_niveau3(mat,mot4,mot5,R,continu,niveau,stage);
		stage ++;
	}
	for(i=3;i<6;i++){//3 niveaux de 4x4//
		game_niveau4(mat,mot4,mot5,mot6,R,continu,niveau,stage);
		stage++;
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau difficile !~~\n");//retour menu "jouer"//
	NiveauJeu();
	
		
}

/**
 * \fn void jouer_hardcore(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R)
 * \brief niveau de difficulté hardcore
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot 
 * \param mot5 Deuxieme mot
 * \param mot6 Troisieme mot
 * \param mot7 Quatrième mot
 * \param mot8 Cinquième mot
 * \param R Concatenation de tout les mots
 */

void jouer_hardcore(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R,int continu){//niveau hardcore//
	int i;
	int niveau=4;
	int stage=1;
	for(i=1;i<3;i++){//2 niveaux 4x4//
		game_niveau4(mat,mot4,mot5,mot6,R,continu,niveau,stage);
		stage++;
	}
	for(i=3;i<6;i++){//3 niveaux 5x5 (extremement difficile)//
		game_niveau5(mat,mot4,mot5,mot6,mot7,mot8,R,continu,niveau,stage);
		stage++;
	}
	clear;
	printf("	   ~~Bravo, vous avez fini le niveau Hardcore ! (vraiment bien joué !)~~\n");//retour menu "jouer"//
	NiveauJeu();
}

/**
 * \fn void NiveauJeu()
 * \brief Menu qui permet de choisir entre les differents niveaux
 */

void NiveauJeu(){
	int mat[10][10];
	char *mot4=malloc(1+4);
	char *mot5=malloc(1+5);
	char *mot6=malloc(1+6);
	char *mot7=malloc(1+7);
	char *mot8=malloc(1+8);
	char *R=" ";
	int continu=1;
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
			case 1 : clear;wb();jouer_facile(mat,mot4,mot5,R,continu);break;
			case 2 : clear;wb();jouer_moyen(mat,mot4,mot5,R,continu);break;
			case 3 : clear;wb();jouer_difficile(mat,mot4,mot5,mot6,R,continu); break;
			case 4 : clear;wb();jouer_hardcore(mat,mot4,mot5,mot6,mot7,mot8,R,continu);break;
			case 5 : clear; break;
			default: printf("Erreur: votre choix doit etre compris entre 1 et 5\n");//Erreur menu//
		}
	}while(choix!=5);
	free(mot4);
	free(mot5);
	free(mot6);
	free(mot7);
	free(mot8);

}


