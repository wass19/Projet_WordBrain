#include <stdio.h>
#include <stdlib.h>
#define N 3

void schema2_1(int mat[N][N],char mot3[20]){
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

int main(){
	int mat[5][5];
	FILE * mot5;
	FILE * mot4;
	fopen("mot5.txt","r");		//113 mot5
	fopen("mot4.txt","r");		//90 mot4
	int h1=rand() % 113 + 1;
	int h2=rand() % 90 + 1;
	char mot1[10]="boissons";
	char mot2[10]="audience";
	char mot3[30];
	int i=0;
	int j=0;
	while(mot1[i]!='\0'){
		mot3[i]=mot1[i];
		i++;
	}
	j=i;
	i=0;
	while(mot2[i]!='\0'){
		mot3[j]=mot2[i];
		j++;
		i++;	
	}
	mot3[j]='\0';	
	while(1){init_fil4(mat,mot3);}
}