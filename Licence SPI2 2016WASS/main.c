#include "Outil.h"

#define N 3


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
char *TrouverLeMot(char reponse[20],char mot1[10],char mot2[10],char mot3[10],char mot4[10],char mot5[10],int mat[N][N],char *R){

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
	n=strcmp(reponse,mot3);
	if(n==0){
		while(mot3[i] != '\0'){
			mot3[i]=' ';
			i++;
		}
		R=sC2(mot1,mot2);
		return R;
	}
	n=strcmp(reponse,mot4);
	if(n==0){
		while(mot4[i] != '\0'){
			mot4[i]=' ';
			i++;
		}
		R=sC2(mot1,mot2);
		return R;
	}
	n=strcmp(reponse,mot5);
	if(n==0){
		while(mot5[i] != '\0'){
			mot5[i]=' ';
			i++;
		}
		R=sC2(mot1,mot2);
		return R;
	}



}

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
int main2(){
	int mat[N][N];
	char mot1[10]="comme";
	char mot2[10]="loup";
	char mot3[10]="wass";
	char mot4[10]="okta";
	char mot5[10]="jidz";
	char reponse[30];
	char recup[20];
	char cs=',';
	char *R;
	char *S;
	int resultat =0;

 	R=sC2(mot1,mot2);
	int bEspace=0;
	do{
		schema2(mat,R);
		printf("\n");
	
		t("ecrivez le mot que vous pensez  avoir trouver ");
		scanf("%s",reponse);

		resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse, mot1, mot2, mot3, mot4, mot5);
		if (resultat == 0){
			t("faux");
		}

		else{ t("vrai");
			R=TrouverLeMot(reponse,mot1,mot2,mot3,mot4,mot5,mat,R);	
			bEspace=bsansblanc(R);
		}

	}while(bEspace!=1);
	t("bravo vous avez trouvez");

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
