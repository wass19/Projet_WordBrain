void Niveau()
{	
	int choix;
	do
	{	
		printf("Choisir une grille :\n");
		printf("2 X 2\n");
		printf("3 X 3\n");
		printf("4 X 4\n");
		printf(" 3 - Quitter\n");
		printf("Votre choix : ");
		scanf("%i",&choix);

		switch(choix)
		{	case 1 : R=choisir_mot4(mot4);init_fil2(mat,R); break;
			case 2:  R=choisir_mot9(mot4,mot5);init_fil3(mat,R); break;
			case 3:  R=choisir_mot16(mot4,mot5,mot6,mot7);init_fil4(mat,R); break;
			case 4:  break;
			default: printf("Erreur: votre choix doit etre compris entre 1 et 4\n");
		}
	}
	while(choix!=4);
}

int main()
{
	int choix;	
	do
	{
		printf("\nMenu :\n");
		printf("-----WORDBRAIN-----\n");
		printf(" 1 - Jouer\n");
		printf(" 2 - Choisir un niveau\n");
		printf(" 3 - Quitter\n");
		printf("Votre choix : ");
		scanf("%i",&choix);

		
		switch(choix)
		{	case 1 : break;
			case 2:  Niveau(); break;
			case 3:  break;
			default: printf("Erreur: votre choix doit etre compris entre 1 et 3\n");
		}
	}
	while(choix!=3);
	printf("Au revoir !\n");
	return 0;
}