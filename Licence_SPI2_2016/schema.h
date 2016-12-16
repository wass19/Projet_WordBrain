#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <assert.h>
#include <time.h>

void schema2_1(int mat[10][10],char mot3[20]);
void schema2_2(int mat[10][10],char mot3[20]);
void schema2_3(int mat[10][10],char mot3[20]);
void schema2_4(int mat[10][10],char mot3[20]);
void schema2_5(int mat[10][10],char mot3[20]);
void schema2_6(int mat[10][10],char mot3[20]);
void schema2_7(int mat[10][10],char mot3[20]);
void schema2_8(int mat[10][10],char mot3[20]);

void schema3_1(int mat[10][10],char mot3[20]);
void schema3_2(int mat[10][10],char mot3[20]);
void schema3_3(int mat[10][10],char mot3[20]);
void schema3_4(int mat[10][10],char mot3[20]);
void schema3_5(int mat[10][10],char mot3[20]);
void schema3_6(int mat[10][10],char mot3[20]);
void schema3_7(int mat[10][10],char mot3[20]);
void schema3_8(int mat[10][10],char mot3[20]);

void schema4_1(int mat[10][10],char mot3[25]);
void schema4_2(int mat[10][10],char mot3[25]);
void schema4_3(int mat[10][10],char mot3[25]);
void schema4_4(int mat[10][10],char mot3[25]);
void schema4_5(int mat[10][10],char mot3[25]);
void schema4_6(int mat[10][10],char mot3[25]);
void schema4_7(int mat[10][10],char mot3[25]);
void schema4_8(int mat[10][10],char mot3[25]);

void schema5_1(int mat[10][10],char mot3[25]);
void schema5_2(int mat[10][10],char mot3[25]);
void schema5_3(int mat[10][10],char mot3[25]);
void schema5_4(int mat[10][10],char mot3[25]);
void schema5_4(int mat[10][10],char mot3[25]);
void schema5_5(int mat[10][10],char mot3[25]);

char *fonc_mot4(char *mot4);
char *fonc_mot5(char *mot5);
char *fonc_mot6(char *mot6);
char *fonc_mot7(char *mot7);

void init_fil3(int mat[10][10],char *mot3);
void init_fil4(int mat[10][10],char *mot3);
void init_fil5(int mat[10][10],char *mot3);

char *fonc_mot4(char *mot4);
char *fonc_mot5(char *mot5);
char *fonc_mot6(char *mot6);
char *fonc_mot7(char *mot7);

void schema(void);
int bChainesEgalesCompare1MotsAvec5Autres(char *TexteAcomparer,char *sTexte2,char *sTexte3,char *sTexte4,char *sTexte5,char *sTexte6);//strcmp 1mot avec 5autres.
int bsansblanc(char *R);//on regarde si il y a que des espaces dans R comme caractère.
int bChaineEgale(char *sTexte1,char *sTexte2);//strcmp(sTexte) 
void upper_string(char *s);//str lower to upper
void help();
char *tomberNiveau2(int mat[10][10],char *R);//faire tomber les lettres pour le niveau 2 (3 cases par ligne et par colonne).
char *tomberNiveau3(int mat[10][10],char *R);//faire tomber les lettres pour le niveau 3 (4 cases par ligne et par colonne).
char *tomberNiveau4(int mat[10][10],char *R);//faire tomber les lettres pour le niveau 4 (5 cases par ligne et par colonne). 	
char *TrouverLeMot(char reponse[20],char mot1[10],char mot2[10],char mot3[10],char mot4[10],char mot5[10],int mat[10][10],char *R);//on remplace le mot qui est égal a la chaine de caractère "reponse" qui est saisie par l'utilisateur par des espaces.
char *TrouverLeMotNiveau1(char reponse[20],int mat[10][10],char *R);
char *TrouverLeMotNiveau2(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *R);
char *TrouverLeMotNiveau3(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *R);
char *TrouverLeMotNiveau4(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,char *R);
void Indice(char *R,char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,int compteur);
void game_niveau2(int mat[10][10],char *mot4,char *R,int continu,int niveau,int stage);
void game_niveau3(int mat[10][10],char *R,char *mot4,char *mot5,int continu,int niveau,int stage);
void game_niveau4(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R,int continu,int niveau,int stage);
void game_niveau5(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R,int continu,int niveau,int stage);


void Niveau(void);
void NiveauJeu(void);

void jouer_facile(int mat[10][10],char *mot4, char *mot5,char *R,int continu);
void jouer_moyen(int mat[10][10],char *mot4, char *mot5,char *R,int continu);
void jouer_difficile(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R,int continu);
void jouer_hardcore(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R,int continu);
void wb();

void stockage_premier(char *premier);
void stockage_deuxieme(char *deuxieme);
void stockage_troisieme(char *troisieme);
void stockage_quatrieme(char *quatrieme);
void stockage_cinquieme(char *cinquieme);
char *lecture_premier(char *premier,int ligne);
char *lecture_deuxieme(char *deuxieme, int ligne);
char *lecture_troisieme(char *troisieme,int ligne);
char *lecture_quatrieme(char *quatrieme,int ligne);
char *lecture_cinquieme(char *cinquieme,int ligne);
char *lecture_R(char *R,int ligne);
void stockage_schema(int schema);
void stockage_R(char *R);
int lecture_schema();
int lecture_combi();
void charger_niveau2(int mat[10][10],char *mot4);
void save_niveau2(int mat[10][10],char *mot4,char *R);
void save_niveau3(int mat[10][10],char *premier, char *deuxieme,char *R);
void save_niveau4(int mat[10][10],char *mot4, char *mot5, char *mot6,char *R);
void save_niveau5(int mat[10][10],char *premier, char *deuxieme,char *troisieme,char *quatrieme,char *cinquieme,char *R);
int nombre_ligne(int ligne);
void sauvegarde(int mat[10][10],char *mot4,char *mot5,char *mot6,char *mot7,char *mot8,char *R);