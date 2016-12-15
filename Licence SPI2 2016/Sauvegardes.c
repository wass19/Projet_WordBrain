#include "Outil.h"
#include "Tas.h"
#include "schema.h"
#include <string.h>
#define clear printf("\e[1;1H\e[2J")

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

void stockage_R(char *R){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s",R);
		fclose(fichier);
}	
	
void stockage_premier(char *premier){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","w");
		fprintf(fichier,"%s \n",premier);
		fclose(fichier);
}

void stockage_deuxieme(char *deuxieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",deuxieme);
		fclose(fichier);
}

void stockage_troisieme(char *troisieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",troisieme);
		fclose(fichier);
}

void stockage_quatrieme(char *quatrieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",quatrieme);
		fclose(fichier);
}

void stockage_cinquieme(char *cinquieme){ 
		FILE * fichier;
		fichier=fopen("chaine.txt","a");
		fprintf(fichier,"%s \n",cinquieme);
		fclose(fichier);
}

void stockage_schema(int schema){ 
		FILE * fichier;
		fichier=fopen("schema.txt","w");
		fprintf(fichier,"%i",schema);
		fclose(fichier);
}

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

int lecture_schema(){
		int schema;		
		FILE * fichier;
		fichier=fopen("schema.txt","r");
		fscanf(fichier,"%i",&schema);
		fclose(fichier);
		return schema;
}

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