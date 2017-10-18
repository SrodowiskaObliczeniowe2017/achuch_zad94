#include <stdio.h>
#include <string.h>

int main()
{
	char linijkaOdUzytkownika[80];
	char kod0[10];
	char kod1[10];
	char kod2[10];
	char kod3[10];
	char kod4[10];
	char kod5[10];
	char kod6[10];
	char kod7[10];
	char kod8[10];
	char kod9[10];
	
	printf("Podaj pierwsze 80 znaków \n");
	scanf("%99s", linijkaOdUzytkownika);
	printf("\n");
	
	printf("Podaj kod dla 0\n");
	scanf("%s", kod0);
	printf("\n");
	
	printf("Podaj kod dla 1\n");
	scanf("%99s", kod1);
	printf("\n");
	
	printf("Podaj kod dla 2\n");
	scanf("%99s", kod2);
	printf("\n");
	
	printf("Podaj kod dla 3\n");
	scanf("%99s", kod3);
	printf("\n");
	
	printf("Podaj kod dla 4\n");
	scanf("%99s", kod4);
	printf("\n");
	
	printf("Podaj kod dla 5\n");
	scanf("%99s", kod5);
	printf("\n");
	
	printf("Podaj kod dla 6\n");
	scanf("%99s", kod6);
	printf("\n");
	
	printf("Podaj kod dla 7");
	scanf("%99s", kod7);
	printf("\n");
	
	printf("Podaj kod dla 8\n");
	scanf("%99s", kod8);
	printf("\n");
	
	printf("Podaj kod dla 9\n");
	scanf("%99s", kod9);
	printf("\n");
	printf("\n");
	printf("Dziękuje. Podałeś następujące dane:\n");
	printf(linijkaOdUzytkownika);
	printf("\n");
	printf(kod0);
	printf("\n");
	printf(kod1);
	printf("\n");
	printf(kod2);
	printf("\n");
	printf(kod3);
	printf("\n");
	printf(kod4);
	printf("\n");
	printf(kod5);
	printf("\n");
	printf(kod6);
	printf("\n");
	printf(kod7);
	printf("\n");
	printf(kod8);
	printf("\n");
	printf(kod9);
	printf("\n");
	
	int i=0;
	char doPorownania[10];
	for(i=0; i<10; i++)
	{
		doPorownania[i] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	
	if(strcmp(doPorownania, kod0) == 0)
        printf("Lancuchy s1 i s2 sa takie same");
    else
        printf("Lancuchy s1 i s2 NIE sa takie same");
	
	return 0;

} 
