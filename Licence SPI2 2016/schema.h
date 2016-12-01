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
char *tomberNiveau2(int mat[10][10],char *R);//faire tomber les lettres pour le niveau 2 (3 cases par ligne et par colonne).
char *tomberNiveau3(int mat[10][10],char *R);//faire tomber les lettres pour le niveau 3 (4 cases par ligne et par colonne).
char *tomberNiveau4(int mat[10][10],char *R);//faire tomber les lettres pour le niveau 4 (5 cases par ligne et par colonne). 	
char *TrouverLeMot(char reponse[20],char mot1[10],char mot2[10],char mot3[10],char mot4[10],char mot5[10],int mat[10][10],char *R);//on remplace le mot qui est égal a la chaine de caractère "reponse" qui est saisie par l'utilisateur par des espaces.
char *TrouverLeMotNiveau1(char reponse[20],int mat[10][10],char *R);
char *TrouverLeMotNiveau2(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *R);
char *TrouverLeMotNiveau3(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *R);
char *TrouverLeMotNiveau4(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,char *R);

void game_niveau2(int mat[10][10],char *mot4,char *R);
void game_niveau3(int mat[10][10],char *R,char *mot4,char *mot5);
void game_niveau4(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R);

void Niveau(void);
