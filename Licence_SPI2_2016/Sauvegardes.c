#include "Outil.h"
#include "Tas.h"
#include "schema.h"
#include <string.h>
#define clear printf("\e[1;1H\e[2J")

/**
	* \file Sauvegardes.c
	* \brief Charger une partie deja sauvegardée
	* \author OKTAY Samed / MESSAGIER Ouassim / LARMIGNAT Thomas
	* \version 2.0
	* \date 16 decembre 2016 
	*/


/**
 * \fn int nombre_ligne(int ligne)
 * \brief Retourne le nombre de ligne du fichier "chaine.txt"
 *
 * \param ligne Nombre de lignes
 */
int nombre_ligne(int ligne){
	char mot[26];
	FILE * fichier;
	fichier=fopen("chaine.txt","r");
	fscanf(fichier,"%s",mot);
	ligne++;	
	while(!feof(fichier)){
		fscanf(fichier,"%s",mot);
		ligne++;
	}
	fclose(fichier);
	return ligne;
}

/**
 * \fn void stockage_R(char *R)
 * \brief Ecrit dans le fichier "chaine.txt" la chaîne concatenée
 *
 * \param R Chaîne concatenée
 */
void stockage_R(char *R){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s",R);
		fclose(fichier);
}	
	
/**
 * \fn void stockage_premier(char *premier)
 * \brief Ecrit dans le fichier "chaine.txt" le premier mot
 *
 * \param premier Premier mot
 */
 
void stockage_premier(char *premier){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","w");
		fprintf(fichier,"%s \n",premier);
		fclose(fichier);
}

/**
 * \fn void stockage_deuxieme(char *deuxieme)
 * \brief Ecrit dans le fichier "chaine.txt" le deuxième mot
 *
 * \param deuxieme Deuxième mot
 */
 
void stockage_deuxieme(char *deuxieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",deuxieme);
		fclose(fichier);
}

/**
 * \fn void stockage_troisieme(char *troisieme)
 * \brief Ecrit dans le fichier "chaine.txt" le troisième mot
 *
 * \param troisieme Troisième mot
 */
 
void stockage_troisieme(char *troisieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",troisieme);
		fclose(fichier);
}

/**
 * \fn void stockage_quatrieme(char *quatrieme)
 * \brief Ecrit dans le fichier "chaine.txt" le quatrième mot
 *
 * \param quatrieme Quatrième mot
 */
 
void stockage_quatrieme(char *quatrieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",quatrieme);
		fclose(fichier);
}

/**
 * \fn void stockage_cinquieme(char *cinquieme)
 * \brief Ecrit dans le fichier "chaine.txt" le cinquième mot
 *
 * \param cinquieme Cinquième mot
 */

void stockage_cinquieme(char *cinquieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",cinquieme);
		fclose(fichier);
}

/**
 * \fn void stockage_schema(int schema)
 * \brief Ecrit dans le fichier "schema.txt" le numéro du schéma
 *
 * \param schema Numéro du schéma
 */
 
void stockage_schema(int schema){ 
		FILE * fichier;
		fichier=fopen("schema.txt","w");
		fprintf(fichier,"%i",schema);
		fclose(fichier);
}

/**
 * \fn char *lecture_premier(char *premier,int ligne)
 * \brief Lis le premier mot du fichier "chaine.txt"
 *
 * \param premier Premier mot
 * \param ligne Numéro de ligne du mot dans le fichier
 *
 *\return Retourne le premier mot
 */
 
char *lecture_premier(char *premier,int ligne){
		FILE * fichier;
		fichier=fopen("chaine.txt","r");
		int i=0;
		ligne=1;
		do{
				fscanf(fichier,"%s",premier);
				i++;
			}while(i<ligne);
		ligne ++;
		fclose(fichier);
		return premier;
}

/**
 * \fn char *lecture_deuxieme(char *deuxieme,int ligne)
 * \brief Lis le deuxieme mot du fichier "chaine.txt"
 *
 * \param deuxieme Deuxième mot
 * \param ligne Numéro de ligne du mot dans le fichier
 *
 * \return Retourne le deuxième mot
 */
 
char *lecture_deuxieme(char *deuxieme,int ligne){
		FILE * fichier;
		fichier=fopen("chaine.txt","r");
		int i=0;
		ligne=2;
		do{
				fscanf(fichier,"%s",deuxieme);
				i++;
			}while(i<ligne);
		ligne ++;
		fclose(fichier);
		return deuxieme;
}

/**
 * \fn char *lecture_troisieme(char *troisieme,int ligne)
 * \brief Lis le troisième mot du fichier "chaine.txt"
 *
 * \param troisieme Troisième mot
 * \param ligne Numéro de ligne du mot dans le fichier
 *
 * \return Retourne le troisième mot
 */
 
char *lecture_troisieme(char *troisieme,int ligne){
		FILE * fichier;
		fichier=fopen("chaine.txt","r");
		int i=0;
		ligne=3;
		do{
				fscanf(fichier,"%s",troisieme);
				i++;
			}while(i<ligne);
		ligne ++;
		fclose(fichier);
		return troisieme;
}

/**
 * \fn char *lecture_quatrieme(char *quatrieme,int ligne)
 * \brief Lis le quatrième mot du fichier "chaine.txt"
 *
 * \param quatrieme Quatrième mot
 * \param ligne Numéro de ligne du mot dans le fichier
 *
 * \return Retourne le quatrième mot
 */
 
char *lecture_quatrieme(char *quatrieme,int ligne){
		FILE * fichier;
		fichier=fopen("chaine.txt","r");
		int i=0;
		ligne=4;
		do{
				fscanf(fichier,"%s",quatrieme);
				i++;
			}while(i<ligne);
		ligne ++;
		fclose(fichier);
		return quatrieme;
}

/**
 * \fn char *lecture_cinquieme(char *cinquieme,int ligne)
 * \brief Lis le cinquieme mot du fichier "chaine.txt"
 *
 * \param cinquieme Cinquième mot
 * \param ligne Numéro de ligne du mot dans le fichier
 *
 * \return Retourne le cinquième mot
 */
 
char *lecture_cinquieme(char *cinquieme,int ligne){
		FILE * fichier;
		fichier=fopen("chaine.txt","r");
		int i=0;
		ligne=5;
		do{
				fscanf(fichier,"%s",cinquieme);
				i++;
			}while(i<ligne);
		ligne ++;
		fclose(fichier);
		return cinquieme;
}

/**
 * \fn char *lecture_R(char *R,int ligne)
 * \brief Lis la chaine concatenée dans le fichier "chaine.txt"
 *
 * \param R Chaîne concatenée
 * \param ligne Numéro de ligne du mot dans le fichier
 *
 * \return Retourne la chaine concatenée
 */
 
char *lecture_R(char *R,int ligne){
		FILE * fichier;
		fichier=fopen("chaine.txt","r");
		int i=0;
		do{
				fscanf(fichier,"%s",R);
				i++;
			}while(i<ligne);
		ligne ++;
		fclose(fichier);
		return R;
}	

/**
 * \fn int lecture_schema()
 * \brief Lis le numéro du schema dans le fichier "schema.txt"
 *
 * \return Retourne le numéro du schema
 */
 
int lecture_schema(){
		int schema;		
		FILE * fichier;
		fichier=fopen("schema.txt","r");
		fscanf(fichier,"%i",&schema);
		fclose(fichier);
		return schema;
}

/**
 * \fn void sauvegarde(int mat[10][10],char *mot4,char *mot5,char *mot6,char *mot7,char *mot8,char *R)
 * \brief Affecte les valeurs en lisant les fichier puis charge une partie
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot 
 * \param mot5 Deuxieme mot
 * \param mot6 Troisieme mot
 * \param mot7 Quatrième mot
 * \param mot8 Cinquième mot
 * \param R Concatenation de tout les mots
 */

void sauvegarde(int mat[10][10],char *mot4,char *mot5,char *mot6,char *mot7,char *mot8,char *R){
	int schema=lecture_schema();
	int nb=0;
	int ligne=0;
	nb=nombre_ligne(ligne);
	printf("%i \n",nb);
	int lg=0;
	R=lecture_R(R,nb);
	while(R[lg]!='\0'){
		lg++;
	}
	printf("%i \n",lg);
		switch(lg){
			case 4: save_niveau2(mat,mot4,R);break;
			case 9:	save_niveau3(mat,mot4,mot5,R);break;
			case 16:save_niveau4(mat,mot4,mot5,mot6,R);break;
			case 25:save_niveau5(mat,mot4,mot5,mot6,mot7,mot8,R);break;

		}
	remove("chaine.txt");
}
	 
/**
 * \fn void save_niveau2(int mat[10][10],char *mot4,char *R)
 * \brief Charge une partie avec une grille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot
 * \param R Concatenation de tout les mots
 */
 
void save_niveau2(int mat[10][10],char *mot4,char *R){
	int hasard=lecture_schema();			//2X2
	int bEspace=0;
	int i=0;
	int compteur=0;
	int resultat=0;
	int aide=0;
	int quitter=0;
	int triche=0;
	int reset=1;
	char *mot1=" ";
	char reponse[30];
	char indice[6]="INDICE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	do{	
		clear;
		wb();
		reset=0;
		compteur=0;
		if(quitter==1){
			break;
		}
		do{
			switch(hasard){
				case 1: schema2_1(mat,R);break;
				case 2: schema2_2(mat,R);break;
				case 3: schema2_3(mat,R);break;
				case 4: schema2_4(mat,R);break; 
				case 5: schema2_5(mat,R);break;
				case 6: schema2_6(mat,R);break;
				case 7: schema2_7(mat,R);break;
				case 8: schema2_8(mat,R);break;

			}
			if(compteur == 0){
				printf("~~~vous avez 2 indices.~~~\n");
			}
			if(compteur != 0){
				printf("~~~Il vous reste %i indice(s).~~~\n",2-compteur);
			}
			printf("~~~Si vous voulez quitter ecrivez \"exit\"~~~\n");
			printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
			scanf("%s",reponse);
			upper_string(reponse);

			aide=bChaineEgale(reponse,indice);
			quitter=bChaineEgale(reponse,exit);
			triche=bChaineEgale(reponse,Ishit);
			reset=bChaineEgale(reponse,RESET);

			if(compteur>=2){
				clear;
				wb();
				t("Désolé vous n'avez plus d'indices");
			} 
			if(aide==1 && compteur<2){
				compteur++;
				clear;
				wb();
				Indice(R,mot4,mot1,mot1,mot1,mot1,compteur);
		
			}
			if(triche==1){
				clear;
				wb();
				printf("mot:%s .\n",R); 
			}
			if(quitter==1){
				break;
			}
			printf("\n");
			if(aide==0 && triche!=1){
				resultat = bChaineEgale(reponse, R);
				if (resultat == 0){
					clear;
					wb();
					printf("Mot invalide, désolé !\n");
					
				}else{ 
					clear;
					wb();
					printf("Le mot est présent !\n");
					R=TrouverLeMotNiveau1(reponse,mat,R);
					bEspace=bsansblanc(R);
				}
			}
 
		}while(bEspace!=1 && reset!=1);
		
	}while(reset==1 || bEspace!=1);
	clear;
	if(quitter==0){		 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
	}

}

/**
 * \fn void save_niveau3(int mat[10][10],char *premier, char *deuxieme,char *R)
 * \brief Charge une partie avec une grille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param premier Premier mot
 * \param deuxieme Deuxième mot
 * \param R Concatenation de tout les mots
 */
 
void save_niveau3(int mat[10][10],char *premier, char *deuxieme,char *R){		//3X3
	int hasard=lecture_schema();			//3X3
	int bEspace=0;
	int i=0;
	int compteur=0;
	int resultat=0;
	int aide=0;
	int quitter=0;
	int triche=0;
	int reset=0;
	char reponse[30];
	char *mot6=" ";
	char indice[6]="INDICE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	premier=lecture_premier(premier,1);
	deuxieme=lecture_deuxieme(deuxieme,2);
	do{	i=0;
		premier=lecture_premier(premier,1);
		deuxieme=lecture_deuxieme(deuxieme,2);
		R=lecture_R(R,3);
		clear;
		wb();
		reset=0;
		compteur=0;
		if(quitter==1){
			break;
		}
		do{
			switch(hasard){
				case 1: schema3_1(mat,R);break;
				case 2: schema3_2(mat,R);break;
				case 3: schema3_3(mat,R);break;
				case 4: schema3_4(mat,R);break;
				case 5: schema3_5(mat,R);break;
				case 6: schema3_6(mat,R);break;
				case 7: schema3_7(mat,R);break;
				case 8: schema3_8(mat,R);break;
			}
			if(compteur == 0){
				printf("~~~vous avez 4 indices.~~~\n");
			}
			if(compteur != 0){
				printf("~~~Il vous reste %i indice(s).~~~\n",4-compteur);
			}
		
			printf("~~~Si vous voulez quitter ecrivez \"exit\"~~~\n");
		
			printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
			scanf("%s",reponse);
			upper_string(reponse);
			aide=bChaineEgale(reponse,indice);
			quitter=bChaineEgale(reponse,exit);
			triche=bChaineEgale(reponse,Ishit);
			reset=bChaineEgale(reponse,RESET);
			if(compteur>=4){
				clear;
				wb();
				t("Désolé vous n'avez plus d'indices");
			
			}
			if(aide==1 && compteur<4){
				compteur++;
				clear;
				wb();
				Indice(R,premier,deuxieme,mot6,mot6,mot6,compteur);
			
			}
			if(triche==1){
				clear;
				wb();
				printf("mot1:%s .\n",premier);
				printf("mot2:%s .\n",deuxieme);
			
			}
			if(quitter==1){
				break;
			}
			if(aide==0 && triche==0){
				resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,premier,deuxieme,mot6,mot6,mot6);
				if (resultat == 0){
				 	
						clear;
						wb();
						printf("Mot invalide, désolé !\n");
				}else{  
					clear;
					wb();
					printf("Le mot est présent !\n");
					R=TrouverLeMotNiveau2(reponse,mat,premier,deuxieme,R);
					bEspace=bsansblanc(R);
					while(i!=5){
						R=tomberNiveau2(mat,R);
						i++;
					}			
				}
	 		}
		}while(bEspace!=1 && reset!=1);
	}while(reset==1 || bEspace!=1);
	clear;
	if(quitter==0){		 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
	}
}

/**
 * \fn void save_niveau4(int mat[10][10],char *premier, char *deuxieme, char *troisieme,char *R)
 * \brief Charge une partie avec une grille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param premier Premier mot
 * \param deuxieme Deuxième mot
 * \param troisieme Troisième mot
 * \param R Concatenation de tout les mots
 */
 
 
void save_niveau4(int mat[10][10],char *premier, char *deuxieme, char *troisieme,char *R){		//4X4
	int hasard_schema=lecture_schema();		
	int bEspace=0;
	int i=0;
	int compteur=0;
	int n=0;
	int resultat=0;
	int aide=0;
	int quitter=0;
	int triche=0;
	int reset=0;
	char reponse[30];
	char *mot7=".";
	char indice[6]="INDICE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	premier=lecture_premier(premier,1);
	deuxieme=lecture_deuxieme(deuxieme,2);
	troisieme=lecture_troisieme(troisieme,3);
	do{			
		i=0;
		premier=lecture_premier(premier,1);
		deuxieme=lecture_deuxieme(deuxieme,2);
		troisieme=lecture_troisieme(troisieme,3);
		R=lecture_R(R,4);
		clear;
		wb();
		reset=0;
		compteur=0;
		if(quitter==1){
			break;
		}
		do{
		
			switch(hasard_schema){
				case 1: schema4_1(mat,R);break;
				case 2: schema4_2(mat,R);break;
				case 3: schema4_3(mat,R);break;
				case 4: schema4_4(mat,R);break;
				case 5: schema4_5(mat,R);break;
				case 6: schema4_6(mat,R);break;
				case 7: schema4_7(mat,R);break;
				case 8: schema4_8(mat,R);break;
			}
			if(compteur == 0){
				printf("~~~vous avez 6 indices.~~~\n");
			}
			if(compteur != 0){
				printf("~~~Il vous reste %i indice(s).~~~\n",6-compteur);
			}
			printf("~~~Si vous voulez quitter ecrivez \"exit\"~~~\n");
			printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
			scanf("%s",reponse);
			upper_string(reponse);
			aide=bChaineEgale(reponse,indice);
			quitter=bChaineEgale(reponse,exit);
			triche=bChaineEgale(reponse,Ishit);
			reset=bChaineEgale(reponse,RESET);
			if(compteur>=6){
				clear;
				wb();
				t("Désolé vous n'avez plus d'indices");
			}
			if(aide==1 && compteur<6){
				compteur++;
				clear;
				wb();
				Indice(R,premier,deuxieme,troisieme,mot7,reponse,compteur);
		
			}
			if(quitter==1){
				break;
			}
			if(triche==1){
				clear;
				wb();
				printf("mot1:%s .\n",premier);
				printf("mot2:%s .\n",deuxieme);
				printf("mot3:%s .\n",troisieme);
			}
			if(aide==0 && triche==0){
			resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,premier,deuxieme,troisieme,mot7,mot7);
				if (resultat == 0){
						clear;
						wb();
						printf("Mot invalide, désolé !\n");		
				}else{ 
					clear;
					wb();
					printf("Le mot est présent !\n");
					R=TrouverLeMotNiveau3(reponse,mat,premier,deuxieme,troisieme,R);
					bEspace=bsansblanc(R);
					i=0;
					while(i<10){
						R=tomberNiveau3(mat,R);
						i++;
					}			
				} 
			}
		}while(bEspace!=1 && reset!=1);
	}while(reset==1 || bEspace!=1);
	clear;
	if(quitter==0){		 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
	}
}

/**
 * \fn void save_niveau5(int mat[10][10],char *premier, char *deuxieme,char *troisieme,char *quatrieme,char *cinquieme,char *R)
 * \brief Charge une partie avec une grille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param premier Premier mot
 * \param deuxieme Deuxième mot
 * \param troisieme Troisième mot
 * \param quatrieme Quatrième mot
 * \param cinquieme Cinquième mot
 * \param R Concatenation de tout les mots
 */
 
void save_niveau5(int mat[10][10],char *premier, char *deuxieme,char *troisieme,char *quatrieme,char *cinquieme,char *R){		//5x5
	int hasard_schema=lecture_schema();
	int bEspace=0;
	int i=0;
	int compteur=0;
	int n=0;
	int resultat=0;
	int aide=0;
	int sauv=0;
	int quitter=0;
	int triche=0;
	int reset=0;
	char reponse[30];
	char indice[6]="INDICE";
	char sauvegarde[20]="SAVE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	premier=lecture_premier(premier,1);
	deuxieme=lecture_deuxieme(deuxieme,2);
	troisieme=lecture_troisieme(troisieme,3);
	quatrieme=lecture_quatrieme(quatrieme,4);
	cinquieme=lecture_cinquieme(cinquieme,5);
	do{			
		i=0;
		premier=lecture_premier(premier,1);
		deuxieme=lecture_deuxieme(deuxieme,2);
		troisieme=lecture_troisieme(troisieme,3);
		quatrieme=lecture_quatrieme(quatrieme,4);
		cinquieme=lecture_cinquieme(cinquieme,5);
		R=lecture_R(R,6);
		clear;
		wb();
		reset=0;
		compteur=0;
		if(quitter==1){
			break;
		}
		do{
	
			switch(hasard_schema){
				case 1: schema5_1(mat,R);break;
				case 2: schema5_2(mat,R);break;
				case 3: schema5_3(mat,R);break;
				case 4: schema5_4(mat,R);break;
				case 5: schema5_5(mat,R);break;
			}
			if(compteur == 0){
				printf("~~~vous avez 10 indices.~~~\n");
			}
			if(compteur != 0){
				printf("~~~Il vous reste %i indice(s).~~~\n",10-compteur);
			}
			printf("~~~Si vous voulez quitter ecrivez \"exit\"~~~\n");
			printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
			scanf("%s",reponse);
			upper_string(reponse);
			aide=bChaineEgale(reponse,indice);
			quitter=bChaineEgale(reponse,exit);
			triche=bChaineEgale(reponse,Ishit);
			reset=bChaineEgale(reponse,RESET);
			if(compteur>=10){
				clear;
				wb();
				t("Désolé vous n'avez plus d'indices");
			}
			if(aide==1 && compteur<10){
				compteur++;
				clear;
				wb();
				Indice(R,premier,deuxieme,troisieme,quatrieme,cinquieme,compteur);
	
			}
			if(triche==1){
				clear;
				wb();
				printf("mot1:%s .\n",premier);
				printf("mot2:%s .\n",deuxieme);
				printf("mot3:%s .\n",troisieme);
				printf("mot4:%s .\n",quatrieme);
				printf("mot5:%s .\n",cinquieme);
			}
			if(quitter==1){
				break;
			}
			if(aide==0 && triche==0){
				resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,premier,deuxieme,troisieme,quatrieme,cinquieme);
				if (resultat == 0){
				 		clear;
						wb();
						printf("Mot invalide, désolé !\n");
				}else{ 
					clear;
					wb();
					printf("Le mot est présent !\n");	
					R=TrouverLeMotNiveau4(reponse,mat,premier,deuxieme,troisieme,quatrieme,cinquieme,R);
					bEspace=bsansblanc(R);
					i=0;
					while(i<10){
						R=tomberNiveau4(mat,R);
						i++;
					}			
				} 
			}
		}while(bEspace!=1 && reset!=1);
	}while(reset==1 || bEspace!=1);
	clear;
	if(quitter==0){		 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
	}
}
