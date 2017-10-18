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
	char odpowiedz[8];
	
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
	int poczatek = 0;
	int koniec = 10;
	char doPorownania[10];
	for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	int indeksOdpowiedzi = 0;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        
        poczatek = 10;
        koniec = 20;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 1;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        
        poczatek = 20;
        koniec = 30;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 3;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        	
        poczatek = 30;
        koniec = 40;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 4;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        	
        poczatek = 40;
        koniec = 50;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 5;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        	
        poczatek = 50;
        koniec = 60;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 6;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        
        poczatek = 60;
        koniec = 70;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 7;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';
        	
        poczatek = 70;
        koniec = 80;	
        for(i=poczatek; i<koniec; i++)
	{
		doPorownania[i - poczatek] = linijkaOdUzytkownika[i];
		
	}
	doPorownania[i-poczatek] ='\0';
	printf("%s",doPorownania);
	printf("\n");
	indeksOdpowiedzi = 8;
	
	if(strcmp(doPorownania, kod0) == 0)
        	odpowiedz[indeksOdpowiedzi]='0';
        if(strcmp(doPorownania, kod1) == 0)
        	odpowiedz[indeksOdpowiedzi]='1';
        if(strcmp(doPorownania, kod2) == 0)
        	odpowiedz[indeksOdpowiedzi]='2';
        if(strcmp(doPorownania, kod3) == 0)
        	odpowiedz[indeksOdpowiedzi]='3';
        if(strcmp(doPorownania, kod4) == 0)
        	odpowiedz[indeksOdpowiedzi]='4';
        if(strcmp(doPorownania, kod5) == 0)
        	odpowiedz[indeksOdpowiedzi]='5';
        if(strcmp(doPorownania, kod6) == 0)
        	odpowiedz[indeksOdpowiedzi]='6';
        if(strcmp(doPorownania, kod7) == 0)
        	odpowiedz[indeksOdpowiedzi]='7';
        if(strcmp(doPorownania, kod8) == 0)
        	odpowiedz[indeksOdpowiedzi]='8';
        if(strcmp(doPorownania, kod9) == 0)
        	odpowiedz[indeksOdpowiedzi]='9';


	printf("%s",odpowiedz);
	
	return 0;

} 
