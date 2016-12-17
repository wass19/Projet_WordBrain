#include "schema.h"
#include "Outil.h"
#define clear printf("\e[1;1H\e[2J")

/**
	* \file schema.c
	* \brief Jouer librement avec choix de la taille de la grille
	* \author OKTAY Samed / MESSAGIER Ouassim / LARMIGNAT Thomas
	* \version 2.0
	* \date 16 decembre 2016 
	*/
	
/**
 * \fn wb()
 * \brief affichage 
 */

void wb(){
	printf("\n _ _ _ _____ _____ ____  _____ _____ _____ _____ _____ \n");
    	printf("| | | |     | __  |    || __  | __  |  _  |_   _|   | |\n");
   	printf("| | | |  |  |    -|  | || __ -|    -|     |_| |_| | | |\n");
  	printf("|_____|_____|__|__|____||_____|__|__|__|__|_____|_|___|\n\n\n");
}	


/**
 * \fn void schema2_1(int mat[10][10],char mot3[20])
 * \brief premier schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */

void schema2_1(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=1;	
	mat[1][1]=2;
	mat[1][0]=3;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}
/**
 * \fn void schema2_2(int mat[10][10],char mot3[20])
 * \brief deuxieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
void schema2_2(int mat[10][10],char *mot3){
	int a;
	mat[0][0]=0;
	mat[0][1]=3;	
	mat[1][1]=1;
	mat[1][0]=2;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema2_3(int mat[10][10],char mot3[20])
 * \brief troisieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
void schema2_3(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=3;
	mat[0][1]=2;	
	mat[1][1]=1;
	mat[1][0]=0;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema2_4(int mat[10][10],char mot3[20])
 * \brief quatrieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
void schema2_4(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=2;
	mat[0][1]=1;	
	mat[1][1]=3;
	mat[1][0]=0;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema2_5(int mat[10][10],char mot3[20])
 * \brief cinquieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
void schema2_5(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=1;	
	mat[1][1]=2;
	mat[1][0]=3;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema2_6(int mat[10][10],char mot3[20])
 * \brief sixieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema2_6(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=2;
	mat[0][1]=0;	
	mat[1][1]=3;
	mat[1][0]=1;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema2_7(int mat[10][10],char mot3[20])
 * \brief septieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema2_7(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=3;
	mat[0][1]=1;	
	mat[1][1]=0;
	mat[1][0]=2;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema2_8(int mat[10][10],char mot3[20])
 * \brief huitieme schema de taille 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema2_8(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=1;
	mat[0][1]=2;	
	mat[1][1]=3;
	mat[1][0]=0;	
	int i;
	int j;
	for(i=0;i<2;i++){
		printf(" ___   ___ \n");
		printf("|   | |   |\n");
		for(j=0;j<2;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___|\n");
	}
}

/**
 * \fn void schema3_1(int mat[10][10],char mot3[20])
 * \brief premier schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
void schema3_1(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=1;
	mat[0][2]=2;
	mat[1][2]=3;	
	mat[1][1]=4;
	mat[1][0]=5;	
	mat[2][0]=6;
	mat[2][1]=7;
	mat[2][2]=8;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_2(int mat[10][10],char mot3[20])
 * \brief deuxieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema3_2(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=2;
	mat[0][2]=8;
	mat[1][2]=7;	
	mat[1][1]=1;
	mat[1][0]=3;	
	mat[2][0]=4;
	mat[2][1]=5;
	mat[2][2]=6;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_3(int mat[10][10],char mot3[20])
 * \brief troisieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */

void schema3_3(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=4;
	mat[0][2]=3;
	mat[1][2]=2;	
	mat[1][1]=1;
	mat[1][0]=5;	
	mat[2][0]=6;
	mat[2][1]=7;
	mat[2][2]=8;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_4(int mat[10][10],char mot3[20])
 * \brief quatrieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema3_4(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=6;
	mat[0][1]=5;
	mat[0][2]=8;
	mat[1][2]=0;	
	mat[1][1]=7;
	mat[1][0]=4;	
	mat[2][0]=3;
	mat[2][1]=2;
	mat[2][2]=1;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_5(int mat[10][10],char mot3[20])
 * \brief cinquieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema3_5(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=7;
	mat[0][1]=8;
	mat[0][2]=2;
	mat[1][2]=3;	
	mat[1][1]=1;
	mat[1][0]=6;	
	mat[2][0]=0;
	mat[2][1]=5;
	mat[2][2]=4;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_6(int mat[10][10],char mot3[20])
 * \brief sixieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */

void schema3_6(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=8;
	mat[0][1]=1;
	mat[0][2]=2;
	mat[1][2]=3;	
	mat[1][1]=0;
	mat[1][0]=7;	
	mat[2][0]=6;
	mat[2][1]=5;
	mat[2][2]=4;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_7(int mat[10][10],char mot3[20])
 * \brief septieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema3_7(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=2;
	mat[0][1]=1;
	mat[0][2]=0;
	mat[1][2]=4;	
	mat[1][1]=3;
	mat[1][0]=8;	
	mat[2][0]=7;
	mat[2][1]=6;
	mat[2][2]=5;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema3_8(int mat[10][10],char mot3[20])
 * \brief huitieme schema de taille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema3_8(int mat[10][10],char *mot3){
	int a;
	mat[0][0]=6;
	mat[0][1]=5;
	mat[0][2]=4;
	mat[1][2]=3;	
	mat[1][1]=7; 
	mat[1][0]=0;	
	mat[2][0]=8;
	mat[2][1]=1;
	mat[2][2]=2;
	int i;
	int j;
	for(i=0;i<3;i++){
		printf(" ___   ___   ___ \n");
		printf("|   | |   | |   |\n");
		for(j=0;j<3;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_1(int mat[10][10],char mot3[20])
 * \brief premier schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_1(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=1;
	mat[0][2]=2;
	mat[0][3]=3;
	mat[1][3]=4;	
	mat[1][2]=5;
	mat[1][1]=6;
	mat[1][0]=7;	
	mat[2][0]=8;
	mat[2][1]=9;
	mat[2][2]=10;
	mat[2][3]=11;	
	mat[3][3]=12;
	mat[3][2]=13;
	mat[3][1]=14;
	mat[3][0]=15;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_2(int mat[10][10],char mot3[20])
 * \brief deuxieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_2(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=14;
	mat[0][1]=15;
	mat[0][2]=8;
	mat[0][3]=6;
	mat[1][3]=5;	
	mat[1][2]=7;
	mat[1][1]=9;
	mat[1][0]=13;	
	mat[2][0]=12;
	mat[2][1]=10;
	mat[2][2]=2;
	mat[2][3]=4;	
	mat[3][3]=3;
	mat[3][2]=0;
	mat[3][1]=1;
	mat[3][0]=11;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_3(int mat[10][10],char mot3[20])
 * \brief troisieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_3(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=12;
	mat[0][1]=11;
	mat[0][2]=10;
	mat[0][3]=8;
	mat[1][3]=9;	
	mat[1][2]=7;
	mat[1][1]=0;
	mat[1][0]=13;	
	mat[2][0]=14;
	mat[2][1]=1;
	mat[2][2]=3;
	mat[2][3]=6;	
	mat[3][3]=4;
	mat[3][2]=5;
	mat[3][1]=2;
	mat[3][0]=15;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_4(int mat[10][10],char mot3[20])
 * \brief quatrieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_4(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=15;
	mat[0][1]=13;
	mat[0][2]=12;
	mat[0][3]=1;
	mat[1][3]=0;	
	mat[1][2]=2;
	mat[1][1]=11;
	mat[1][0]=14;	
	mat[2][0]=10;
	mat[2][1]=3;
	mat[2][2]=4;
	mat[2][3]=6;	
	mat[3][3]=5;
	mat[3][2]=7;
	mat[3][1]=8;
	mat[3][0]=9;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_5(int mat[10][10],char mot3[20])
 * \brief cinquieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_5(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=15;
	mat[0][1]=14;
	mat[0][2]=13;
	mat[0][3]=12;
	mat[1][3]=11;	
	mat[1][2]=2;
	mat[1][1]=1;
	mat[1][0]=0;	
	mat[2][0]=8;
	mat[2][1]=9;
	mat[2][2]=10;
	mat[2][3]=3;	
	mat[3][3]=4;
	mat[3][2]=5;
	mat[3][1]=6;
	mat[3][0]=7;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_6(int mat[10][10],char mot3[20])
 * \brief sixieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_6(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=2;
	mat[0][1]=0;
	mat[0][2]=13;
	mat[0][3]=15;
	mat[1][3]=12;	
	mat[1][2]=14;
	mat[1][1]=3;
	mat[1][0]=1;	
	mat[2][0]=7;
	mat[2][1]=8;
	mat[2][2]=4;
	mat[2][3]=11;	
	mat[3][3]=10;
	mat[3][2]=9;
	mat[3][1]=5;
	mat[3][0]=6;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_7(int mat[10][10],char mot3[20])
 * \brief septieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_7(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=9;
	mat[0][1]=10;
	mat[0][2]=7;
	mat[0][3]=6;
	mat[1][3]=5;	
	mat[1][2]=1;
	mat[1][1]=8;
	mat[1][0]=11;	
	mat[2][0]=12;
	mat[2][1]=0;
	mat[2][2]=4;
	mat[2][3]=2;	
	mat[3][3]=3;
	mat[3][2]=15;
	mat[3][1]=14;
	mat[3][0]=13;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema4_8(int mat[10][10],char mot3[20])
 * \brief huitieme schema de taille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema4_8(int mat[10][10],char mot3[20]){
	int a;
	mat[0][0]=12;
	mat[0][1]=13;
	mat[0][2]=14;
	mat[0][3]=15;
	mat[1][3]=2;	
	mat[1][2]=3;
	mat[1][1]=9;
	mat[1][0]=11;	
	mat[2][0]=10;
	mat[2][1]=4;
	mat[2][2]=8;
	mat[2][3]=1;	
	mat[3][3]=0;
	mat[3][2]=7;
	mat[3][1]=6;
	mat[3][0]=5;
	int i;
	int j;
	for(i=0;i<4;i++){
		printf(" ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   |\n");
		for(j=0;j<4;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema5_1(int mat[10][10],char mot3[20])
 * \brief premier schema de taille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema5_1(int mat[10][10],char mot3[25]){
	int a;
	mat[0][0]=11;
	mat[0][1]=12;
	mat[0][2]=13;
	mat[0][3]=17;
	mat[0][4]=16;
	mat[1][4]=18;	
	mat[1][3]=15;
	mat[1][2]=14;
	mat[1][1]=10;
	mat[1][0]=0;	
	mat[2][0]=3;
	mat[2][1]=1;
	mat[2][2]=9;
	mat[2][3]=21;
	mat[2][4]=19;	
	mat[3][4]=20;
	mat[3][3]=22;
	mat[3][2]=8;
	mat[3][1]=2;
	mat[3][0]=4;
	mat[4][0]=5;
	mat[4][1]=6;
	mat[4][2]=7;
	mat[4][3]=24;
	mat[4][4]=23;
	int i;
	int j;
	for(i=0;i<5;i++){
		printf(" ___   ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   | |   |\n");
		for(j=0;j<5;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema5_2(int mat[10][10],char mot3[20])
 * \brief deuxieme schema de taille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema5_2(int mat[10][10],char mot3[25]){
	int a;
	mat[0][0]=17;
	mat[0][1]=16;
	mat[0][2]=19;
	mat[0][3]=22;
	mat[0][4]=24;
	mat[1][4]=23;	
	mat[1][3]=20;
	mat[1][2]=21;
	mat[1][1]=18;
	mat[1][0]=15;
	mat[2][0]=14;
	mat[2][1]=13;
	mat[2][2]=7;
	mat[2][3]=8;
	mat[2][4]=5;
	mat[3][4]=4;
	mat[3][3]=6;
	mat[3][2]=9;
	mat[3][1]=0;
	mat[3][0]=12;
	mat[4][0]=11;
	mat[4][1]=10;
	mat[4][2]=1;
	mat[4][3]=2;
	mat[4][4]=3;
	int i;
	int j;
	for(i=0;i<5;i++){
		printf(" ___   ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   | |   |\n");
		for(j=0;j<5;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema5_3(int mat[10][10],char mot3[20])
 * \brief troisieme schema de taille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema5_3(int mat[10][10],char mot3[25]){
	int a;
	mat[0][0]=24;
	mat[0][1]=6;
	mat[0][2]=5;
	mat[0][3]=0;
	mat[0][4]=1;
	mat[1][4]=2;	
	mat[1][3]=3;
	mat[1][2]=4;
	mat[1][1]=7;
	mat[1][0]=23;
	mat[2][0]=22;
	mat[2][1]=21;
	mat[2][2]=8;
	mat[2][3]=13;
	mat[2][4]=12;
	mat[3][4]=11;
	mat[3][3]=9;
	mat[3][2]=14;
	mat[3][1]=19;
	mat[3][0]=20;
	mat[4][0]=18;
	mat[4][1]=17;
	mat[4][2]=16;
	mat[4][3]=15;
	mat[4][4]=10;
	int i;
	int j;
	for(i=0;i<5;i++){
		printf(" ___   ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   | |   |\n");
		for(j=0;j<5;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema5_4(int mat[10][10],char mot3[20])
 * \brief quatrieme schema de taille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema5_4(int mat[10][10],char mot3[25]){
	int a;
	mat[0][0]=15;
	mat[0][1]=14;
	mat[0][2]=12;
	mat[0][3]=10;
	mat[0][4]=9;
	mat[1][4]=8;	
	mat[1][3]=11;
	mat[1][2]=13;
	mat[1][1]=17;
	mat[1][0]=16;
	mat[2][0]=18;
	mat[2][1]=19;
	mat[2][2]=20;
	mat[2][3]=6;
	mat[2][4]=7;
	mat[3][4]=1;
	mat[3][3]=2;
	mat[3][2]=5;
	mat[3][1]=21;
	mat[3][0]=22;
	mat[4][0]=23;
	mat[4][1]=24;
	mat[4][2]=4;
	mat[4][3]=3;
	mat[4][4]=0;
	int i;
	int j;
	for(i=0;i<5;i++){
		printf(" ___   ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   | |   |\n");
		for(j=0;j<5;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___| |___|\n");
	}
}

/**
 * \fn void schema5_5(int mat[10][10],char mot3[20])
 * \brief cinquieme schema de taille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot3 Chaîne concatenée
 */
 
void schema5_5(int mat[10][10],char mot3[25]){
	int a;
	mat[0][0]=3;
	mat[0][1]=2;
	mat[0][2]=0;
	mat[0][3]=21;
	mat[0][4]=20;
	mat[1][4]=19;	
	mat[1][3]=22;
	mat[1][2]=23;
	mat[1][1]=1;
	mat[1][0]=4;
	mat[2][0]=6;
	mat[2][1]=5;
	mat[2][2]=24;
	mat[2][3]=17;
	mat[2][4]=18;
	mat[3][4]=15;
	mat[3][3]=16;
	mat[3][2]=12;
	mat[3][1]=9;
	mat[3][0]=7;
	mat[4][0]=8;
	mat[4][1]=10;
	mat[4][2]=11;
	mat[4][3]=13;
	mat[4][4]=14;
	int i;
	int j;
	for(i=0;i<5;i++){
		printf(" ___   ___   ___   ___   ___ \n");
		printf("|   | |   | |   | |   | |   |\n");
		for(j=0;j<5;j++){
			a=mat[i][j];
			printf("| %c | ",mot3[a]);
			}
		printf("\n|___| |___| |___| |___| |___|\n");
	}
}

/**
 * \fn char *fonc_mot4(char *mot4)
 * \brief Prend un mot de 4 lettres du fichier "mot4.txt"
 *
 * \param mot4 Mot choisit
 * \return Retourne le mot choisit au hasard
 */
 
char *fonc_mot4(char *mot4){
		int ligne = rand()%90+1;
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot4.txt","r");
			do{
				fscanf(fichier,"%s",mot4);
				i++;
			}while(i<ligne);
		fclose(fichier);
		return mot4;
			
}		

/**
 * \fn char *fonc_mot5(char *mot5)
 * \brief Prend un mot de 5 lettres du fichier "mot5.txt"
 *
 * \param mot5 Mot choisit
 * \return Retourne le mot choisit au hasard
 */
 
char *fonc_mot5(char *mot5){
		int ligne = rand()%113+1;
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot5.txt","r");
			do{
				fscanf(fichier,"%s",mot5);
				i++;
			}while(i<ligne);
		fclose(fichier);
		return mot5;
}		

/**
 * \fn char *fonc_mot6(char *mot6)
 * \brief Prend un mot de 6 lettres du fichier "mot4.txt"
 *
 * \param mot6 Mot choisit
 * \return Retourne le mot choisit au hasard
 */
 
char *fonc_mot6(char *mot6){
		int ligne = rand()%83+1;
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot6.txt","r");
			do{
				fscanf(fichier,"%s",mot6);
				i++;
			}while(i<ligne);
		fclose(fichier);
		return mot6;	
}		

/**
 * \fn char *fonc_mot7(char *mot7)
 * \brief Prend un mot de 7 lettres du fichier "mot7.txt"
 *
 * \param mot7 Mot choisit
 * \return Retourne le mot choisit au hasard
 */

char *fonc_mot7(char *mot7){
		int ligne = rand()%165+1;
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot7.txt","r");
			do{
				fscanf(fichier,"%s",mot7);
				i++;
			}while(i<ligne);
		fclose(fichier);
		return mot7;
}

/**
 * \fn char *TrouverLeMotNiveau1(char reponse[20],int mat[10][10],char *R)
 * \brief Compare le mot entré à la réponse sur une grille 2x2
 *
 * \param reponse[20] Proposition / mot entré
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param R La réponse
 * \return Remplace la réponse par des espaces si la proposition est correcte
 */
 
char *TrouverLeMotNiveau1(char reponse[20],int mat[10][10],char *R){
	int n=0;int i=0;
	n=strcmp(reponse,R);
	if(n==0){
		while(R[i] != '\0'){
			R[i]=' ';
			i++;
		}
	}
	return R;
}

/**
 * \fn char *TrouverLeMotNiveau2(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *R)
 * \brief Compare le mot entré à la réponse sur une grille 3x3
 *
 * \param reponse[20] Proposition / mot entré
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot1 Premier mot de la réponse
 * \param mot2 Deuxième mot de la réponse
 * \param R Réponse / Chaîne concatenée des 2 mots
 * \return Renvoie le mot trouvé par des espaces si la proposition est correcte
 */

char *TrouverLeMotNiveau2(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *R){

	int n=0;int i=0;
	n=strcmp(reponse,mot1);
	if(n==0){
		while(mot1[i] != '\0'){
			mot1[i]=' ';
			i++;
		}
		R=sC2(mot1,mot2);
		return R;
	}
	n=strcmp(reponse,mot2);
	if(n==0){
		while(mot2[i] != '\0'){
			mot2[i]=' ';
			i++;
		}
		R=sC2(mot1,mot2);
		return R;
	}
}

/**
 * \fn char *TrouverLeMotNiveau3(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *R)
 * \brief Compare le mot entré à la réponse sur une grille 4x4
 *
 * \param reponse[20] Proposition / mot entré
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot1 Premier mot de la réponse
 * \param mot2 Deuxième mot de la réponse
 * \param mot3 Troisième mot de la réponse
 * \param R Réponse / Chaîne concatenée des 3 mots
 * \return Renvoie la chaîne de concatenée avec le mot trouvé remplacé par des espaces si la proposition est correcte
 */
 
char *TrouverLeMotNiveau3(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *R){
	int n=0;int i=0;
	n=strcmp(reponse,mot1);
	if(n==0){
		while(mot1[i] != '\0'){
			mot1[i]=' ';
			i++;
		}
		R=sC3(mot1,mot2,mot3);
		return R;
	}
	n=strcmp(reponse,mot2);
	if(n==0){
		while(mot2[i] != '\0'){
			mot2[i]=' ';
			i++;
		}
		R=sC3(mot1,mot2,mot3);
		return R;
	}
	n=strcmp(reponse,mot3);
	if(n==0){
		while(mot3[i] != '\0'){
			mot3[i]=' ';
			i++;
		}
		R=sC3(mot1,mot2,mot3);
		return R;
	}
}

/**
 * \fn char *TrouverLeMotNiveau4(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,char *R)
 * \brief Compare le mot entré à la réponse sur une grille 5x5
 *
 * \param reponse[20] Proposition / mot entré
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot1 Premier mot de la réponse
 * \param mot2 Deuxième mot de la réponse
 * \param mot3 Troisième mot de la réponse
 * \param mot4 Quatrième mot de la réponse
 * \param mot5 Cinquième mot de la réponse 
 * \param R Réponse / Chaîne concatenée des 5 mots
 * \return Renvoie la chaîne de concatenée avec le mot trouvé remplacé par des espaces si la proposition est correcte
 */
 
char *TrouverLeMotNiveau4(char reponse[20],int mat[10][10],char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,char *R){

	int n=0;int i=0;
	n=strcmp(reponse,mot1);
	if(n==0){
		while(mot1[i] != '\0'){
			mot1[i]=' ';
			i++;
		}
		R=sC5(mot1,mot2,mot3,mot4,mot5);
		return R;
	}
	n=strcmp(reponse,mot2);
	if(n==0){
		while(mot2[i] != '\0'){
			mot2[i]=' ';
			i++;
		}
		R=sC5(mot1,mot2,mot3,mot4,mot5);
		return R;
	}
	n=strcmp(reponse,mot3);
	if(n==0){
		while(mot3[i] != '\0'){
			mot3[i]=' ';
			i++;
		}
		R=sC5(mot1,mot2,mot3,mot4,mot5);
		return R;
	}
	n=strcmp(reponse,mot4);
	if(n==0){
		while(mot4[i] != '\0'){
			mot4[i]=' ';
			i++;
		}
		R=sC5(mot1,mot2,mot3,mot4,mot5);
		return R;
	}
	n=strcmp(reponse,mot5);
	if(n==0){
		while(mot5[i] != '\0'){
			mot5[i]=' ';
			i++;
		}
		R=sC5(mot1,mot2,mot3,mot4,mot5);
		return R;
	}
}

/**
 * \fn int bsansblanc(char *R)
 * \brief Regarde si la chaîne de caractère possède des espaces
 *
 * \param R Chaîne concatenée
 * \return Retourne 0 si la chaîne concatenée est composée seulement d'espace si non retourne 1
 */

int bsansblanc(char *R){
	int i=0;
	int bAvcCaractere=0;
	int bSansCaractere=1;
	nChaineLg(R);
	while(R[i] != '\0'){
		
		if(R[i] != ' '){	
			return bAvcCaractere;
		}
		i++;

	}
	return bSansCaractere;
}

/**
 * \fn char *tomberNiveau2(int mat[10][10],char *R)
 * \brief Faire tomber les lettres si la case du dessous est vide pour une grille 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param R Chaîne concatenée
 * \return Retourne la chaîne concatenée 
 */
 
char *tomberNiveau2(int mat[10][10],char *R){//pour 3 cases par ligne
	int n=2;
	int m=2;
	int s1;
	int s2;
	nChaineLg(R);
	while(n>0){
		s1=mat[n][m];
		s2=mat[n-1][m];
		if((R[s1]==' ') && (R[s2]!=' ')){
			R[s1]=R[s2];
			R[s2]=' ';
		}	
		m--;

		if(m<0){
			m=2;
			n--;
		}
	}
	return R;
}

/**
 * \fn char *tomberNiveau3(int mat[10][10],char *R)
 * \brief Faire tomber les lettres si la case du dessous est vide pour une grille 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param R Chaîne concatenée
 * \return Retourne la chaîne concatenée 
 */
 
char *tomberNiveau3(int mat[10][10],char *R){//pour 4 cases par ligne
	int n=3;
	int m=3;
	int s1=0;
	int s2=0;
	nChaineLg(R);
	while(n>0){
		s1=mat[n][m];
		s2=mat[n-1][m];
		if((R[s1]==' ') && (R[s2]!=' ')){
			R[s1]=R[s2];
			R[s2]=' ';
		}	
		m--;

		if(m<0){
			m=3;
			n--;
		}
	}
	return R;
}

/**
 * \fn char *tomberNiveau4(int mat[10][10],char *R)
 * \brief Faire tomber les lettres si la case du dessous est vide pour une grille 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param R Chaîne concatenée
 * \return Retourne la chaîne concatenée 
 */
 
char *tomberNiveau4(int mat[10][10],char *R){//pour 5 cases par lignes.
	int n=4;
	int m=4;
	int s1;
	int s2;
	nChaineLg(R);
	while(n!=0){
		s1=mat[n][m];
		s2=mat[n-1][m];
		if((R[s1]==' ') && (R[s2]!=' ')){
			R[s1]=R[s2];
			R[s2]=' ';
		}	
		m--;

		if(m<0){
			m=4;
			n--;
		}
	}
	return R;
}

/**
 * \fn void Indice(char *R,char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,int compteur)
 * \brief Donne un indice d'un des mots
 *
 * \param R Chaîne concatenée
 * \param mot1 Premier mot de la réponse
 * \param mot2 Deuxième mot de la réponse
 * \param mot3 Troisième mot de la réponse
 * \param mot4 Quatrième mot de la réponse
 * \param mot5 Cinquième mot de la réponse 
 * \param compteur Compteur d'indice 
 */
 
void Indice(char *R,char *mot1,char *mot2,char *mot3,char *mot4,char *mot5,int compteur){
	int n=0;
	int i=0;
	int nbr2lettres=0;
	//2X2	
	int Egale_R_mot1=nChaineLg(R)==nChaineLg(mot1);
	if (Egale_R_mot1==1 && compteur<=4){
		
		printf("mot1: ");
		while(n<compteur){		
			printf("%c",mot1[n]);
			n++;
		}
		while(mot1[nbr2lettres]!='\0'){
			nbr2lettres++;
		}
		i=nbr2lettres-compteur;
		nbr2lettres=0;
		while(nbr2lettres!=i){
			printf("_");
			nbr2lettres++;
		}
		printf("\n");
	}
	

	char *C2;	
	C2=sC2(mot1,mot2);
	int Egale_R_mot1_2=nChaineLg(R)==nChaineLg(C2);
	//3X3
	if (Egale_R_mot1_2==1 && compteur<10){
		
		if((compteur%2)==0){
			printf("mot2: ");
			while(n < (compteur/2)){
				printf("%c",mot2[n]);
				n++;
			}
			while(mot2[nbr2lettres]!='\0'){
				nbr2lettres++;
			}
			i=nbr2lettres-n;
			nbr2lettres=0;
			while(nbr2lettres!=i){
				printf("_");
				nbr2lettres++;
			}
			printf("\n");
		}
		if((compteur%2)!=0){

			compteur=(compteur/2)+1;
			printf("mot1: ");
			while(n < compteur){
				printf("%c",mot1[n]);
				n++;
			}
			while(mot1[nbr2lettres]!='\0'){
				nbr2lettres++;
			}
			i=nbr2lettres-n;
			nbr2lettres=0;
			while(nbr2lettres!=i){
				printf("_");
				nbr2lettres++;
			}
			printf("\n");
		}

	}
	
	//4X4
	char *C3;	
	C3=sC3(mot1,mot2,mot3);
	int Egale_R_mot1_2_3=nChaineLg(R)==nChaineLg(C3);
	if (Egale_R_mot1_2_3==1 && compteur<=10){
		if((compteur%3)==0){
			printf("mot3: ");
			while(n < (compteur/3)){
				printf("%c",mot3[n]);
				n++;
			}
			while(mot3[nbr2lettres]!='\0'){
				nbr2lettres++;
			}
			i=nbr2lettres-n;
			nbr2lettres=0;
			while(nbr2lettres!=i){
				printf("_");
				nbr2lettres++;
			}
			printf("\n");
		}
		else if((compteur%3)!=0){
			
			if(((compteur+2)%3)==0){
				printf("mot1: ");
				compteur=(compteur/3)+1;
				while(n < compteur){
					printf("%c",mot1[n]);
					n++;
				}
				while(mot1[nbr2lettres]!='\0'){
					nbr2lettres++;
				}
				i=nbr2lettres-n;
				nbr2lettres=0;
				while(nbr2lettres!=i){
					printf("_");
					nbr2lettres++;
				}
				printf("\n");
			}			
			else if(((compteur+1)%3)==0){
				printf("mot2: ");
				compteur=(compteur/3)+1;				
				while(n < compteur){
					printf("%c",mot2[n]);
					n++;
				}
				while(mot2[nbr2lettres]!='\0'){
					nbr2lettres++;
				}
				i=nbr2lettres-n;
				nbr2lettres=0;
				while(nbr2lettres!=i){
					printf("_");
					nbr2lettres++;
				}
				printf("\n");
			}
			

		}

	}
	
	//5X5
	char *C5;	
	C5=sC5(mot1,mot2,mot3,mot4,mot5);
	int Egale_R_mot1_2_3_4_5=nChaineLg(R)==nChaineLg(C5);	
	if (Egale_R_mot1_2_3_4_5==1 && compteur<=10){
										//printf("test 1 \n");
										//printf("%i	",compteur);  //compteur doit être sup à 1
										/*if(compteur>0){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
		if((compteur%5)==0){						//printf("test 2 \n");
										//printf("%i	",compteur);  //compteur doit être = à 5 ou 10
										/*if(compteur==5||compteur==10){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
			printf("mot5: ");
			while(n < (compteur/5)){
				printf("%c",mot5[n]);
				n++;
			}
			while(mot5[nbr2lettres]!='\0'){
				nbr2lettres++;
			}
			i=nbr2lettres-n;
			nbr2lettres=0;
			while(nbr2lettres!=i){
				printf("_");
				nbr2lettres++;
			}
			printf("\n");
		}
		
		else if((compteur%5)!=0){
												
			if(((compteur+4)%5)==0){				//printf("test 3 \n");
										//printf("%i	",compteur);  //compteur doit être = à 1 ou 6
										/*if(compteur==1||compteur==6){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				compteur=(compteur/5)+1;			//printf("test 4 \n");
										//printf("%i	",compteur);  //compteur doit être = à 1 ou 2
										/*if(compteur==1||compteur==2){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				printf("mot1: ");
				while(n < compteur){
					printf("%c",mot1[n]);
					n++;
				}
				while(mot1[nbr2lettres]!='\0'){
					nbr2lettres++;
				}
				i=nbr2lettres-n;
				nbr2lettres=0;
				while(nbr2lettres!=i){
					printf("_");
					nbr2lettres++;
				}
				printf("\n");
			}
						
			else if(((compteur+3)%5)==0){				//printf("test 5 \n");
										//printf("%i	",compteur);  //compteur doit être = à 2 ou 7	
										/*if(compteur==2||compteur==7){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				compteur=(compteur/5)+1;			//printf("test 6 \n");
										//printf("%i	",compteur);  //compteur doit être = à 1 ou 2
										/*if(compteur==1||compteur==2){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				printf("mot2: ");			
				while(n < compteur){
					printf("%c",mot2[n]);
					n++;
				}
				while(mot2[nbr2lettres]!='\0'){
					nbr2lettres++;
				}
				i=nbr2lettres-n;
				nbr2lettres=0;
				while(nbr2lettres!=i){
					printf("_");
					nbr2lettres++;
				}
				printf("\n");
			}
			
			else if(((compteur+2)%5)==0){				//printf("test 7 \n");
										//printf("%i	",compteur);  //compteur doit être = à 3 ou 8
										/*if(compteur==3||compteur==8){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				compteur=(compteur/5)+1;			//printf("test 8 \n");
										//printf("%i	",compteur);  //compteur doit être = à 1 ou 2
										/*if(compteur==1||compteur==2){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				printf("mot3: ");				
				while(n < compteur){
					printf("%c",mot3[n]);
					n++;
				}
				while(mot3[nbr2lettres]!='\0'){
					nbr2lettres++;
				}
				i=nbr2lettres-n;
				nbr2lettres=0;
				while(nbr2lettres!=i){
					printf("_");
					nbr2lettres++;
				}
				printf("\n");
			}
			
			else if(((compteur+1)%5)==0){				//printf("test 9 \n");
										//printf("%i	",compteur);  //compteur doit être = à 4 ou 9 
										/*if(compteur==4||compteur==9){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/

				compteur=(compteur/5)+1;			//printf("test 10 \n");
										//printf("%i	",compteur);  //compteur doit être = à 1 ou 2
										/*if(compteur==1||compteur==2){
											printf("le test est bon \n",compteur);
										}
										else printf("erreur \n");*/
				printf("mot4: ");
				while(n < compteur){
					printf("%c",mot4[n]);
					n++;
				}
				while(mot3[nbr2lettres]!='\0'){
					nbr2lettres++;
				}
				i=nbr2lettres-n;
				nbr2lettres=0;
				while(nbr2lettres!=i){
					printf("_");
					nbr2lettres++;
				}
				printf("\n");
			}
			
		}

	}
}

/**
 * \fn int bChaineEgale(char *sTexte1,char *sTexte2)
 * \brief Compare 2 chaîne de caractères
 *
 * \param sTexte1 première chaîne de caractère
 * \param sTexte2 Deuxième chaîne de caractère
 * \return 1 la chaîne sTexte1 est egale à la chaîne sTexte2.
 */
 
 
int bChaineEgale(char *sTexte1,char *sTexte2){//strcmp(sTexte) 
	int nC;
	int bEgale=nChaineLg(sTexte1)==nChaineLg(sTexte2);
	if(bEgale){
		for (nC=0;nC<nChaineLg(sTexte1);nC++)
			bEgale=bEgale && sTexte1[nC] == sTexte2[nC];
		
	}
	Assert1("bChaineEgale",bBool(bEgale));
	return bEgale;
}//bChaineEgale

/**
 * \fn int bChainesEgalesCompare1MotsAvec5Autres(char *TexteAcomparer,char *sTexte2,char *sTexte3,char *sTexte4,char *sTexte5,char *sTexte6){
 * \brief Compare 1 chaîne de caractère avec 5 autres
 *
 * \param TexteAcomparer Chaîne à comparer
 * \param sTexte2 Deuxième chaîne de caractère
 * \param sTexte3 Troisième chaîne de caractère
 * \param sTexte4 Quatrième chaîne de caractère
 * \param sTexte5 Cinquième chaîne de caractère
 * \param sTexte6 Sixième chaîne de caractère
 * \return 1 si une chaîne parmis les cinques est la même que la chaîne TexteAcomparer
 */
 
int bChainesEgalesCompare1MotsAvec5Autres(char *TexteAcomparer,char *sTexte2,char *sTexte3,char *sTexte4,char *sTexte5,char *sTexte6){//strcmp(sTexte) 
	int nC;
	int bEgales=(nChaineLg(TexteAcomparer)==nChaineLg(sTexte2) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte3) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte4) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte5) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte6) );
	
	if(bEgales){
		bEgales=bChaineEgale(TexteAcomparer,sTexte2) || bChaineEgale(TexteAcomparer,sTexte3) || bChaineEgale(TexteAcomparer,sTexte4) || bChaineEgale(TexteAcomparer,sTexte5) || bChaineEgale(TexteAcomparer,sTexte6);
				
	}
	Assert1("bChaineEgale",bBool(bEgales));
	return bEgales;
}//bChaineEgale

/**
 * \fn void upper_string(char *s)
 * \brief Transforme une chaîne de caractère en majuscule
 *
 * \param s Chaîne à transformer
 */

void upper_string(char *s){
	int c = 0;
	while (s[c] != '\0') {
		if (s[c] >= 'a' && s[c] <= 'z') {
			s[c] = s[c] - 32;
		}
		c++;
	}   
}

/**
 * \fn void help()
 * \brief Execute la commande "more" sur le terminal afin d'afficher les règles du jeu 
 */

void help(){
	wb();
	char command[50];
	char q;
	char retourner[1]=" ";
	int system(const char *command);
	strcpy( command, "more help.txt" );
	system(command);
	scanf("%s",retourner);
	if(retourner == "q"){
		main2();
	}
}


/**
 * \fn void game_niveau2(int mat[10][10],char *mot4,char *R,int continu,int niveau,int stage)
 * \brief Crée une partie avec une grille de 2x2
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot
 * \param R Concatenation de tout les mots
 * \param continu Vaut 1 si la fonction est lancé depuis le mode continu si non vaut 0.
 * \param niveau Niveau de difficulté pour le mode continu
 * \param stage Progression lorsqu'un niveau de difficulté est choisi
 */

void game_niveau2(int mat[10][10],char *mot4,char *R,int continu,int niveau,int stage){			//2X2
	int bEspace=0;
	int i=0;
	int compteur=0;
	int resultat=0;
	int aide=0;
	int sauv=0;
	int quitter=0;
	int triche=0;
	int reset=1;
	char *mot1=" ";
	char reponse[30];
	char sauvegarde[20]="SAVE";
	char indice[6]="INDICE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	R = fonc_mot4(mot4);
	int hasard = rand() % 8 + 1;	
	
	do{	
		clear;
		wb();
		if(continu==1){
			printf("Niveau facile: %i/10\n",stage);
		}
		stage++;
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
				 	sauv = bChaineEgale(reponse, sauvegarde);//Debut récupération sauvegarde
					if(sauv==1){
						remove("chaine.txt");
						stockage_R(R);
						stockage_schema(hasard);
						clear;
						wb();
					}			//Fin récupération sauvegarde
					else{
						clear;
						wb();
						printf("Mot invalide, désolé !\n");
					}
				}
			
				else{ 
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
		printf("\n\n\n\n\n\n\n"); 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
		sleep(2);
		clear;
	}	 
	

}

/**
 * \fn void game_niveau3(int mat[10][10],char *mot4, char *mot5,char *R,int continu,int niveau,int stage){
 * \brief Crée une partie avec une grille de 3x3
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot
 * \param mot5 Deuxieme mot
 * \param R Concatenation de tout les mots
 * \param continu Vaut 1 si la fonction est lancé depuis le mode continu si non vaut 0.
 * \param niveau Niveau de difficulté pour le mode continu
 * \param stage Progression lorsqu'un niveau de difficulté est choisi
 */
 
void game_niveau3(int mat[10][10],char *mot4, char *mot5,char *R,int continu,int niveau,int stage){		//3X3
	int bEspace=0;
	int i=0;
	int compteur=0;
	int resultat=0;
	int aide=0;
	int sauv=0;
	int quitter=0;
	int triche=0;
	int reset=0;
	char reponse[30];
	char *premier = fonc_mot4(mot4);		
	char *deuxieme = fonc_mot5(mot5);
	char *mot6=" ";
	char sauvegarde[20]="SAVE";
	char indice[6]="INDICE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	
	R=sC2(premier,deuxieme);
	int hasard = rand() % 8 + 1;         //entre 1 & 8
	stockage_premier(premier);
	stockage_deuxieme(deuxieme);
	stockage_R(R);
	do{	i=0;
		premier=lecture_premier(premier,1);
		deuxieme=lecture_deuxieme(deuxieme,2);
		R=lecture_R(R,3);
		clear;
		wb();
		if((continu==1)&&(niveau==1)){
			printf("Niveau facile: %i/10\n",stage);
		}
		if((continu==1)&&(niveau==2)){
			printf("Niveau intermédiaire: %i/10\n",stage);
		}
		if((continu==1)&&(niveau==3)){
			printf("Niveau difficile: %i/5\n",stage);
		}
		stage++;
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
				 	sauv = bChaineEgale(reponse, sauvegarde);//Debut récupération sauvegarde
					if(sauv==1){
						remove("chaine.txt");
						stockage_premier(premier);
						stockage_deuxieme(deuxieme);
						stockage_R(R);
						stockage_schema(hasard);
						clear;
						wb();
			
					}//Fin récupération sauvegarde
					else{
						clear;
						wb();
						printf("Mot invalide, désolé !\n");
					}
		
				}
				else{ 
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
		printf("\n\n\n\n\n\n\n"); 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
		sleep(2);
		clear;
	}
}

/**
 * \fn void game_niveau4(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R,int continu,int niveau,int stage)
 * \brief Crée une partie avec une grille de 4x4
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot
 * \param mot5 Deuxieme mot
 * \param mot6 Troisième mot
 * \param R Concatenation de tout les mots
 * \param continu Vaut 1 si la fonction est lancé depuis le mode continu si non vaut 0.
 * \param niveau Niveau de difficulté pour le mode continu
 * \param stage Progression lorsqu'un niveau de difficulté est choisi
 */
 
void game_niveau4(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R,int continu,int niveau,int stage){		//4X4
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
	char *mot7=".";
	char indice[6]="INDICE";
	char *premier;
	char *deuxieme;
	char *troisieme;
	char sauvegarde[20]="SAVE";
	char *exit="EXIT";
	char *Ishit="ISHIT";
	char *RESET="RESET";
	int hasard_mot = rand() % 3 + 1;
	switch(hasard_mot){
		case 1: premier=fonc_mot6(mot4);deuxieme=fonc_mot6(mot5);troisieme=fonc_mot4(mot6);R=sC3(premier,deuxieme,troisieme);break;
		case 2: premier=fonc_mot6(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);R=sC3(premier,deuxieme,troisieme);break;
		case 3: premier=fonc_mot7(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot4(mot6);R=sC3(premier,deuxieme,troisieme);break;
	}
	
	int hasard_schema = rand() % 8 + 1;         //entre 1 & 8
	stockage_premier(premier);
	stockage_deuxieme(deuxieme);
	stockage_troisieme(troisieme);
	stockage_R(R);
	do{			
		i=0;
		premier=lecture_premier(premier,1);
		deuxieme=lecture_deuxieme(deuxieme,2);
		troisieme=lecture_troisieme(troisieme,3);
		R=lecture_R(R,4);
		clear;
		wb();
		if((continu==1)&&(niveau==1)){
			printf("Niveau facile: %i/10\n",stage);
		}
		if((continu==1)&&(niveau==2)){
			printf("Niveau intermédiaire: %i/10\n",stage);
		}
		if((continu==1)&&(niveau==3)){
			printf("Niveau difficile: %i/5\n",stage);
		}
		if((continu==1)&&(niveau==4)){
			printf("Niveau hardcore: %i/5\n",stage);
		}	
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
			resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,mot4,mot5,mot6,mot7,mot7);
				if (resultat == 0){
				 sauv = bChaineEgale(reponse, sauvegarde);//Debut récupération sauvegarde
					if(sauv==1){
						stockage_premier(premier);
						stockage_deuxieme(deuxieme);
						stockage_troisieme(troisieme);
						stockage_R(R);
						stockage_schema(hasard_schema);
						clear;
						wb();
			
					}//Fin récupération sauvegarde
					else{
						clear;
						wb();
						printf("Mot invalide, désolé !\n");
					}
		
				}
				else{ 
					clear;
					wb();
					printf("Le mot est présent !\n");
					R=TrouverLeMotNiveau3(reponse,mat,premier,deuxieme,troisieme,R);
					bEspace=bsansblanc(R);
					t(R);
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
		printf("\n\n\n\n\n\n\n"); 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
		sleep(2);
		clear;
	}
}

/**
 * \fn void game_niveau5(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R,int continu,int niveau,int stage)
 * \brief Crée une partie avec une grille de 5x5
 *
 * \param mat[10][10] Matrice de 10x10 contenant le(s) mot(s)
 * \param mot4 Premier mot
 * \param mot5 Deuxieme mot
 * \param mot6 Troisième mot
 * \param mot7 Quatrième mot
 * \param mot8 Cinquième mot
 * \param R Concatenation de tout les mots
 * \param continu Vaut 1 si la fonction est lancé depuis le mode continu si non vaut 0.
 * \param niveau Niveau de difficulté pour le mode continu
 * \param stage Progression lorsqu'un niveau de difficulté est choisi
 */
 
void game_niveau5(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R,int continu,int niveau,int stage){		//5x5
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
	char *premier;
	char *deuxieme;
	char *troisieme;
	char *quatrieme;
	char *cinquieme;
	

	int hasard_mot= rand() % 5 + 1;
	switch(hasard_mot){
		case 1: premier=fonc_mot6(mot4);deuxieme=fonc_mot6(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot4(mot7);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 2: premier=fonc_mot7(mot7);deuxieme=fonc_mot6(mot5);troisieme=fonc_mot4(mot6);quatrieme=fonc_mot4(mot4);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 3: premier=fonc_mot7(mot7);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot4(mot4);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 4: premier=fonc_mot6(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot5(mot7);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 5: premier=fonc_mot5(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot5(mot7);cinquieme=fonc_mot5(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
	}
	
	int hasard_schema = rand() % 5 + 1;         //entre 1 & 8
	stockage_premier(premier);
	stockage_deuxieme(deuxieme);
	stockage_troisieme(troisieme);
	stockage_quatrieme(quatrieme);
	stockage_cinquieme(cinquieme);
	stockage_R(R);
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
		if((continu==1)&&(niveau==1)){
			printf("Niveau facile: %i/10\n",stage);
		}
		if((continu==1)&&(niveau==2)){
			printf("Niveau intermédiaire: %i/10\n",stage);
		}
		if((continu==1)&&(niveau==3)){
			printf("Niveau difficile: %i/5\n",stage);
		}
		if((continu==1)&&(niveau==4)){
			printf("Niveau hardcore: %i/5\n",stage);
		}
		stage++;
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
				resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,mot4,mot5,mot6,mot7,mot8);
				if (resultat == 0){
				 	sauv = bChaineEgale(reponse, sauvegarde);//Debut récupération sauvegarde
					if(sauv==1){
						stockage_premier(premier);
						stockage_deuxieme(deuxieme);
						stockage_troisieme(troisieme);
						stockage_quatrieme(quatrieme);
						stockage_cinquieme(cinquieme);
						stockage_R(R);
						stockage_schema(hasard_schema);
						clear;
						wb();
					}//Fin récupération sauvegarde
			
					else{
						clear;
						wb();
						printf("Mot invalide, désolé !\n");
					}
				}
		
				else{ 
					clear;
					wb();
					printf("Le mot est présent !\n");	
					R=TrouverLeMotNiveau4(reponse,mat,mot4,mot5,mot6,mot7,mot8,R);
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
		printf("\n\n\n\n\n\n\n"); 
		printf("	   ~~Bravo, vous avez fini la grille~~\n");
		sleep(2);
		clear;
	}
}

/**
 * \fn void Niveau()
 * \brief Menu qui permet de choisir entre les differentes grilles
 */

void Niveau()
{	
	clear;
	int mat[10][10];
	char *mot4=malloc(1+4);
	char *mot5=malloc(1+5);
	char *mot6=malloc(1+6);
	char *mot7=malloc(1+7);
	char *mot8=malloc(1+8);
	char *R=malloc(1+25);
	int choix;
	int continu=0;
	int niveau=0;
	int stage=0; 
	wb();
	printf("Choisir une grille :\n");
	printf("		 _________________________ \n");
	printf("		|                         |\n");  
	printf("		| 1 -2X2                  |\n");
	printf("		| 2 -3X3                  |\n");
	printf("		| 3 -4X4                  |\n");
	printf("		| 4 -5X5                  |\n");
	printf("		| 5 -Menu Principal       |\n");
	printf("		|_________________________|\n\n");
	printf("Votre choix : ");
	scanf("%i",&choix);
	switch(choix)
	{	case 1 : clear;wb();game_niveau2(mat,mot4,R,continu,niveau,stage); break;
		case 2:  clear;wb();game_niveau3(mat,mot4,mot5,R,continu,niveau,stage); break;
		case 3:  clear;wb();game_niveau4(mat,mot4,mot5,mot6,R,continu,niveau,stage); break;
		case 4:  clear;wb();game_niveau5(mat,mot4,mot5,mot6,mot7,mot8,R,continu,niveau,stage); break;
		case 5:  clear; break;
		default: printf("Erreur: votre choix doit etre compris entre 1 et 4\n");
	}
	
}
