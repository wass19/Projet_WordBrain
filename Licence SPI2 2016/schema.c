#include "schema.h"
#include "Outil.h"
#define clear printf("\e[1;1H\e[2J")



void wb(){
	printf("\n _ _ _ _____ _____ ____  _____ _____ _____ _____ _____ \n");
    	printf("| | | |     | __  |    || __  | __  |  _  |_   _|   | |\n");
   	printf("| | | |  |  |    -|  | || __ -|    -|     |_| |_| | | |\n");
  	printf("|_____|_____|__|__|____||_____|__|__|__|__|_____|_|___|\n\n\n");
}

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

void schema2_2(int mat[10][10],char mot3[20]){
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

void game_niveau2(int mat[10][10],char *mot4,char *R){			//2X2
	int bEspace=0;
	int i=0;
	int resultat=0;
	int aide=0;
	char reponse[30];
	R = fonc_mot4(mot4);
	char indice[6]="indice";
	int hasard = rand() % 8 + 1;
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
		
		printf("\n");
		
		printf("Ecrivez le mot que vous pensez  avoir trouver :\n");
		scanf("%s",reponse);
		aide=bChaineEgale(reponse,indice);
		if(aide==1){
			printf("%c \n",R[0]);
		
		}
		resultat = bChaineEgale(reponse, R);
		if (resultat == 0){
			clear;
			wb();
			printf("Mot invalide, désolé !\n");
		}
		
		else{ 
			clear;
			wb();
			printf("Le mot est présent !\n");
			R=TrouverLeMotNiveau1(reponse,mat,R);
			bEspace=bsansblanc(R);
			
		}
 
	}while(bEspace!=1);
	clear;	 
	printf("	   ~~Bravo, vous avez fini la grille~~\n");

}

void game_niveau3(int mat[10][10],char *mot4, char *mot5,char *R){		//3X3
	int bEspace=0;
	int i=0;
	int resultat=0;
	int aide=0;
	char reponse[30];
	char *premier = fonc_mot4(mot4);		
	char *deuxieme = fonc_mot5(mot5);
	R=sC2(premier,deuxieme);
	char *mot6=" ";
	char *mot7=" .";
	char indice[6]="indice";
	int hasard = rand() % 8 + 1;         //entre 1 & 8
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
		printf("\n");
		t(R);
		printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
		scanf("%s",reponse);
		aide=bChaineEgale(reponse,indice);
		if(aide==1){
			printf("%c \n",R[0]);
		
		}
		resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,premier,deuxieme,mot6,mot7,R);
		clear;
	        wb();
		if (resultat == 0){
			printf("Mot invalide, désolé !\n");
		}
		
		
		else{ 
			printf("Le mot est présent !\n");
			R=TrouverLeMotNiveau2(reponse,mat,premier,deuxieme,R);
			bEspace=bsansblanc(R);
			while(i!=5){
				R=tomberNiveau2(mat,R);
				i++;
			}			
		}
 
	}while(bEspace!=1); 
	clear;
	printf("	   ~~Bravo, vous avez fini la grille~~\n");
}

void game_niveau4(int mat[10][10],char *mot4, char *mot5,char *mot6,char *R){		//4X4
	int bEspace=0;
	int i=0;
	int n=0;
	int resultat=0;
	int aide=0;
	char reponse[30];
	char *mot7=".";
	char indice[6]="indice";
	int hasard_mot = rand() % 3 + 1;
	char *premier;
	char *deuxieme;
	char *troisieme;
	switch(hasard_mot){
		case 1: premier=fonc_mot6(mot4);deuxieme=fonc_mot6(mot5);troisieme=fonc_mot4(mot6);R=sC3(premier,deuxieme,troisieme);break;
		case 2: premier=fonc_mot6(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);R=sC3(premier,deuxieme,troisieme);break;
		case 3: premier=fonc_mot7(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot4(mot6);R=sC3(premier,deuxieme,troisieme);break;
	}
	
	int hasard_schema = rand() % 8 + 1;         //entre 1 & 8
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
		printf("\n");
		printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
		scanf("%s",reponse);
		aide=bChaineEgale(reponse,indice);
		if(aide==1){
			printf("%c \n",R[0]);
		
		}
		resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,mot4,mot5,mot6,mot7,R);
		if (resultat == 0){
			clear;
			wb();
			printf("Mot invalide, désolé !\n");
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
	}while(bEspace!=1);
	clear;	 
	printf("	   ~~Bravo, vous avez fini la grille~~\n");
}

void game_niveau5(int mat[10][10],char *mot4, char *mot5,char *mot6,char *mot7,char *mot8,char *R){		//5x5
	int bEspace=0;
	int i=0;
	int n=0;
	int resultat=0;
	int aide=0;
	char reponse[30];
	char indice[6]="indice";
	int hasard_mot= rand() % 5 + 1;
	char *premier;
	char *deuxieme;
	char *troisieme;
	char *quatrieme;
	char *cinquieme;
	switch(hasard_mot){
		case 1: premier=fonc_mot6(mot4);deuxieme=fonc_mot6(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot4(mot7);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 2: premier=fonc_mot7(mot7);deuxieme=fonc_mot6(mot5);troisieme=fonc_mot4(mot6);quatrieme=fonc_mot4(mot4);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 3: premier=fonc_mot7(mot7);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot4(mot4);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 4: premier=fonc_mot6(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot5(mot7);cinquieme=fonc_mot4(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
		case 5: premier=fonc_mot5(mot4);deuxieme=fonc_mot5(mot5);troisieme=fonc_mot5(mot6);quatrieme=fonc_mot5(mot7);cinquieme=fonc_mot5(mot8);R=sC5(premier,deuxieme,troisieme,quatrieme,cinquieme);break;
	}
	
	int hasard_schema = rand() % 5 + 1;         //entre 1 & 8
	do{
		
		switch(hasard_schema){
			case 1: schema5_1(mat,R);break;
			case 2: schema5_2(mat,R);break;
			case 3: schema5_3(mat,R);break;
			case 4: schema5_4(mat,R);break;
			case 5: schema5_5(mat,R);break;
		}
		printf("\n");
		printf("Ecrivez le mot que vous pensez  avoir trouvé :\n");
		scanf("%s",reponse);
		aide=bChaineEgale(reponse,indice);
		if(aide==1){
			printf("%c \n",R[0]);
		
		}
		resultat = bChainesEgalesCompare1MotsAvec5Autres(reponse,mot4,mot5,mot6,mot7,mot8);
		if (resultat == 0){
			clear;
			wb();
			printf("Mot invalide, désolé !\n");;
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
	}while(bEspace!=1);
	clear;		 
	printf("	   ~~Bravo, vous avez fini la grille~~\n");
}


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
	{	case 1 : clear;wb();game_niveau2(mat,mot4,R); break;
		case 2:  clear;wb();game_niveau3(mat,mot4,mot5,R); break;
		case 3:  clear;wb();game_niveau4(mat,mot4,mot5,mot6,R); break;
		case 4:  clear;wb();game_niveau5(mat,mot4,mot5,mot6,mot7,mot8,R); break;
		case 5:  clear; break;
		default: printf("Erreur: votre choix doit etre compris entre 1 et 4\n");
	}
	
}
