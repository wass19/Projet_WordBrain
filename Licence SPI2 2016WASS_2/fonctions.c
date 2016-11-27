
int bChainesEgalesCompare1MotsAvec5Autres(char *TexteAcomparer,char *sTexte2,char *sTexte3,char *sTexte4,char *sTexte5,char *sTexte6){//strcmp(sTexte) 
	int nC;
	int bEgales=(nChaineLg(TexteAcomparer)==nChaineLg(sTexte2) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte3) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte4) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte5) || nChaineLg(TexteAcomparer)==nChaineLg(sTexte6) );
	
	if(bEgales){
		bEgales=bChaineEgale(TexteAcomparer,sTexte2) || bChaineEgale(TexteAcomparer,sTexte3) || bChaineEgale(TexteAcomparer,sTexte4) || bChaineEgale(TexteAcomparer,sTexte5) || bChaineEgale(TexteAcomparer,sTexte6);
				
	}
	Assert1("bChaineEgale",bBool(bEgales));
	return bEgales;
}//on regarde si le mot saisie correspond a un des mots par default.

int bsansblanc(char *R){//on regarde si il y a que des espaces dans R comme caractère si oui l'utilisateur a trouver tout les mots c'est une fonction booléenne.
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

char *tomberNiveau2(int mat[N][N],char *R){//pour 3 cases par ligne
	int n=2;
	int m=2;
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

		if(m==0){
			m=N;
			n--;
		}
	}
	return R;
}

char *tomberNiveau3(int mat[N][N],char *R){//pour 4 cases par ligne
	int n=3;
	int m=3;
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

		if(m==0){
			m=N;
			n--;
		}
	}
	return R;
}

char *tomberNiveau4(int mat[N][N],char *R){//pour 5 cases par lignes.
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

		if(m==0){
			m=N;
			n--;
		}
	}
	return R;
}

char *TrouverLeMot(char reponse[20],char mot1[10],char mot2[10],char mot3[10],char mot4[10],char mot5[10],int mat[N][N],char *R){//on remplace le mot qui correspond au mot saisie par l'utilisateur par des espaces.

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




