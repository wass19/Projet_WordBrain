#include <stdio.h>
#include <stdlib.h>
#define N 3

void schema2_1(int mat[N][N],char mot3[20]){
	int a;
	int mat2[N][N];
	mat[0][0]=0;
	mat[0][1]=1;	
	mat[1][1]=2;
	mat[1][0]=3;	
	int i;
	int j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			mat2[i][j]=mat[i][j];
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema2_2(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=3;	
	mat[1][1]=1;
	mat[1][0]=2;	
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

void schema2_3(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=3;
	mat[0][1]=2;	
	mat[1][1]=1;
	mat[1][0]=0;	
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

void schema2_4(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=2;
	mat[0][1]=1;	
	mat[1][1]=3;
	mat[1][0]=0;	
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

void schema2_5(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=0;
	mat[0][1]=1;	
	mat[1][1]=2;
	mat[1][0]=3;	
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

void schema2_6(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=2;
	mat[0][1]=0;	
	mat[1][1]=3;
	mat[1][0]=1;	
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

void schema2_7(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=3;
	mat[0][1]=1;	
	mat[1][1]=0;
	mat[1][0]=2;	
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

void schema2_8(int mat[N][N],char mot3[20]){
	int a;
	mat[0][0]=1;
	mat[0][1]=2;	
	mat[1][1]=3;
	mat[1][0]=0;	
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

void schema3_1(int mat[N][N],char mot3[20]){
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

void schema3_2(int mat[N][N],char mot3[20]){
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

void schema3_3(int mat[N][N],char mot3[20]){
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

void schema3_4(int mat[N][N],char mot3[20]){
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

void schema3_5(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema3_6(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema3_7(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema3_8(int mat[N][N],char mot3[20]){
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
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_1(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_2(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_3(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_4(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_5(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_6(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_7(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
			a=mat[i][j];
			
			printf(" %c ",mot3[a]);
		}
		printf(" \n");
	}
}

void schema4_8(int mat[4][4],char mot3[20]){
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
		for(j=0;j<4;j++){
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

void init_fil2(int mat[N][N],char mot3[20]){
	int hasard = rand() % 8 + 1;         //entre 1 & 8
	printf("%i \n",hasard);
	switch(hasard){
		case 1: schema2_1(mat,mot3);break;
		case 2: schema2_2(mat,mot3);break;
		case 3: schema2_3(mat,mot3);break;
		case 4: schema2_4(mat,mot3);break;
		case 5: schema2_5(mat,mot3);break;
		case 6: schema2_6(mat,mot3);break;
		case 7: schema2_7(mat,mot3);break;
		case 8: schema2_8(mat,mot3);break;

	}
}

void init_fil3(int mat[N][N],char mot3[20]){
	int hasard = rand() % 8 + 1;         //entre 1 & 8
	printf("%i \n",hasard);
	switch(hasard){
		case 1: schema3_1(mat,mot3);break;
		case 2: schema3_2(mat,mot3);break;
		case 3: schema3_3(mat,mot3);break;
		case 4: schema3_4(mat,mot3);break;
		case 5: schema3_5(mat,mot3);break;
		case 6: schema3_6(mat,mot3);break;
		case 7: schema3_7(mat,mot3);break;
		case 8: schema3_8(mat,mot3);break;
	}
}

void init_fil4(int mat[4][4],char mot3[20]){
	int hasard = rand() % 8 + 1;         //entre 1 & 8
	printf("%i \n",hasard);
	switch(hasard){
		case 1: schema4_1(mat,mot3);break;
		case 2: schema4_2(mat,mot3);break;
		case 3: schema4_3(mat,mot3);break;
		case 4: schema4_4(mat,mot3);break;
		case 5: schema4_5(mat,mot3);break;
		case 6: schema4_6(mat,mot3);break;
		case 7: schema4_7(mat,mot3);break;
		case 8: schema4_8(mat,mot3);break;
	}
}

void fonct_mot4(char* mot4){
		int ligne = rand()%90+1;
		printf("%i",ligne);
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot4.txt","r");
			do{
				fscanf(fichier,"%s",mot4);
				i++;
			}while(i<ligne);
		printf("%s \n",mot4);
		fclose(fichier);
			
}		

<<<<<<< HEAD:Partie Samed/proj.c
void fonct_mot5(char* mot5){
=======
void fonc_mot5(char* mot5){
>>>>>>> 12864782b1b9127f62d3d974e4f92002d477fbe2:Partie Samed/proj.c
		int ligne = rand()%113+1;
		printf("%i",ligne);
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot5.txt","r");
			do{
				fscanf(fichier,"%s",mot5);
				i++;
			}while(i<ligne);
		printf("%s \n",mot5);
		fclose(fichier);
}		


<<<<<<< HEAD:Partie Samed/proj.c
void fonct_mot6(char* mot6){
=======
void fonc_mot6(char* mot6){
>>>>>>> 12864782b1b9127f62d3d974e4f92002d477fbe2:Partie Samed/proj.c
		int ligne = rand()%83+1;
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot6.txt","r");
			do{
				fscanf(fichier,"%s",mot6);
				i++;
			}while(i<ligne);
		printf("%s \n",mot6);
		fclose(fichier);
			
}		


<<<<<<< HEAD:Partie Samed/proj.c
void fonct_mot7(char* mot7){
=======
void fonc_mot7(char* mot7){
>>>>>>> 12864782b1b9127f62d3d974e4f92002d477fbe2:Partie Samed/proj.c
		int ligne = rand()%165+1;
		int i=0; 
		FILE * fichier;
		fichier=fopen("mot7.txt","r");
			do{
				fscanf(fichier,"%s",mot7);
				i++;
			}while(i<ligne);
		printf("%s \n",mot7);
		fclose(fichier);
			
}		

<<<<<<< HEAD:Partie Samed/proj.c
void choisir_mot9(){
	fonc_mot4();
	fonc_mot5();
}

void choisir_mot16(){
	int hasard = rand() % 3 + 1;
	switch(hasard){
		case 1: fonc_mot4();fonc_mot4();fonc_mot4();break;
		case 2: fonc_mot6();fonc_mot4();fonc_mot6();break;
		case 3: fonc_mot7();fonc_mot4();fonc_mot4();break;
		default :Assert1("choisir_mot16",0);
}


void choisir_mot25(){
=======
/*int choisir_mot9(){
	fonc_mot4();
	fonc_mot5();
}*/

int choisir_mot16(void fonc_mot6(char* mot6),void fonc_mot7(char* mot7),void fonc_mot5(char* mot5),void fonct_mot4(char* mot4)){
	int hasard = rand() % 3 + 1;
	mot4=malloc(1+4);
	mot5=malloc(1+5);
	mot6=malloc(1+6);
	mot7=malloc(1+7);
	switch(hasard){
		case 1: fonc_mot6(mot6);fonc_mot4(mot4);fonc_mot6(mot6);break;
		case 2: fonc_mot6(mot6);fonc_mot5(mot5);fonc_mot5(mot5);break;
		case 3: fonc_mot4(mot4);fonc_mot7(mot7);fonc_mot5(mot5);break;
	}
	free(mot4);
	free(mot5);
	free(mot6);
	free(mot7);
}


int choisir_mot25(){
>>>>>>> 12864782b1b9127f62d3d974e4f92002d477fbe2:Partie Samed/proj.c
	int hasard = rand() % 5 + 1;
	switch(hasard){
		case 1: fonc_mot6();fonc_mot6();fonc_mot5();fonc_mot4();fonc_mot4();break;
		case 2: fonc_mot7();fonc_mot6();fonc_mot4();fonc_mot4();fonc_mot4();break;
		case 3: fonc_mot7();fonc_mot5();fonc_mot5();fonc_mot4();fonc_mot4();break;
		case 4: fonc_mot6();fonc_mot5();fonc_mot5();fonc_mot5();fonc_mot4();break;
		case 5: fonc_mot5();fonc_mot5();fonc_mot5();fonc_mot5();fonc_mot5();break;
<<<<<<< HEAD:Partie Samed/proj.c
		default :Assert1("choisir_mot25",0);
=======
	}
>>>>>>> 12864782b1b9127f62d3d974e4f92002d477fbe2:Partie Samed/proj.c
}

int main(){
	int mat[5][5];
	char* mot4[10];
	char* mot5[10];
	char* mot6[10];
	char* mot7[10];
	char mot3[100];
	int i=0;
	int j=0;
	while(*mot4[i]!='\0'){
		mot3[i]=*mot4[i];
		i++;
	}
	j=i;
	i=0;
	while(*mot5[i]!='\0'){
		mot3[j]=*mot5[i];
		j++;
		i++;	
	}
	mot3[j]='\0';	
<<<<<<< HEAD:Partie Samed/proj.c
	
=======
	//choisir_mot16(mot4,mot5,mot6,mot7);
	init_fil3(mat,mot3);
>>>>>>> 12864782b1b9127f62d3d974e4f92002d477fbe2:Partie Samed/proj.c
}