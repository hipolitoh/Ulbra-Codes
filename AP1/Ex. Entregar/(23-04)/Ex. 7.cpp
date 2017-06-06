#include<string.h>
#include<conio.h>
#include<stdio.h>
main()
{
	char estado[100];
	
	printf("Digite a sigla do seu estado em letras maiusculas : ");
	scanf("%s",&estado);
	if(strcmp(estado,"RS")==0)
	{
		printf("\nGaucho");
	}
	else if(strcmp(estado,"SP")==0)
	{
		printf("\nPaulista");
	}
	else if(strcmp(estado,"MG")==0)
	{
		printf("\nMineiro");
	}
	else if(strcmp(estado,"OE")!=0)
	{
		printf("\nOutros estados");
	}
	getche();
}
