#include<stdio.h>
#include<stdlib.h>


typedef struct {
	float x;
	float y;
	int dir;
} t_tortue; 


void init(t_tortue* t){
	(*t).x=0;
	(*t).y=0;
	(*t).dir=0;
}


void avancer(t_tortue* tor,float deplact){
	float a = (*tor).x;
	float b = (*tor).y;
	float c = (*tor).dir;

	if(c==0){
		(*tor).y=deplact+(*tor).y;
		printf("%f %f moveto %f %f lineto stroke \n",a,b,deplact,b);
	}
	if(c==1){
		(*tor).x=deplact+(*tor).x;
		printf("%f %f moveto %f %f lineto stroke \n",a,b,a,deplact);
	}
	if(c==2){
		(*tor).y=((*tor).y)-deplact;
		printf("%f %f moveto %f %f lineto stroke \n",a,b,a,deplact);	
	}		
	if(c==3){
		(*tor).x=((*tor).x)-deplact;
		printf("%f %f moveto %f %f lineto stroke \n",a,b,deplact,b);
	}

}/* Fait avancer la tortue de deplact unités, dans la direction courante */

void tourner_droite(t_tortue* tor){
	(*tor).x = (*tor).x+1;
	if((*tor).x>=3){
		(*tor).x=0;
	}
	
}

void tourner_gauche (t_tortue* tor){
	(*tor).x = (*tor).x-1;
	if((*tor).x<=0){
		(*tor).x=3;
	}
}

/* Fait tourner la tortue de 90° resp
ectivement à droite et à gauche */ 

void placer(t_tortue* tor, float x, float y, int dir){
	float x1 = (*tor).x;
	float y1 = (*tor).y;
	int dir1 = (*tor).dir;
	(*tor).x=x;
	(*tor).y=y;
	(*tor).dir=dir;
	printf("%f %f %i moveto %f %f %i lineto stroke \n",x1,y1,dir1,x,y,dir);

}/* Initialise la structure tortue avec les trois valeurs reçues en paramètres */ 

int main(){
	printf("% !cpostscript");
	t_tortue a; 
	init(&a); 
	placer(&a,300,400,0);
	avancer(&a,100);
	tourner_droite(&a);
	avancer(&a,100);
	tourner_gauche (&a);
	avancer(&a,100); 
	printf("showpage \n");
	
	return 0;
}


