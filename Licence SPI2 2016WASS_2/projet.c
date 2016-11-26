#include "Outil.h"
#define N 3


void init_mat(int mat[N][N]){
	int i;
	int j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat[i][j]=0;
		}
	}
}

/*void init_fil(int mat[N][N]){
	
	switch(hasard){
		case 01:void schéma 1;
		
		
	}
}*/


void schema1(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema2(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema3(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void affich_mat(int mat[N][N]){
	int i;
	int j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			
			printf(" %i ",mat[i][j]);
		}
		printf("\n");
	}
}

void concatener(int mot1[10][10]){
}

int main2(){
	int mat[N][N];
	char mot1[10]="comme";
	char mot2[10]="loup";
	char mot3[30];
	char *R;
 	R=sC2(mot1,mot2);
	t(R);
	
	init_mat(mat);
	schema1(mat,mot3);
	printf("\n");
	schema2(mat,mot3);
	printf("\n");
	schema3(mat,mot3);
	printf("\n");
	schema4(mat,mot3);
	
}

void ModuleAmorceR(){
	//amorce tous les modules (code à exécuter une fois pour toutes AVANT d'utiliser un quelconque module depuis le main)
	OutilAMORCER();//NE PAS DECLASSER:doit toujours être appelé en premier
	//amorcer TOUS les modules autres que Outil mentionnés dans les include de main.c
		TasAMORCER();
}//ModuleAmorceR

int main (int argc, const char * argv[]) {
	Appel0("");//NE PAS TOUCHER; ce code doit toujours être placé au début du main
		ModuleAmorceR();//NE PAS TOUCHER; ce code doit toujours suivre immédiatement Appel0("")
		main2();
	Appel1("");//NE PAS TOUCHER; ce code doit toujours être placé à la fin du main, juste avant le return()
    return 0;
}//main
