#include<string.h>
#include<stdio.h>
#include<conio.h>
main()
{
	char nome[100],sexo[100];
	int idade;

    printf("Digite seu nome : ");
	gets(nome);
	printf("\nDigite masculino ou feminino...\n\nQual seu sexo : ");
	scanf("%s",&sexo);
	printf("\nDigite sua idade : ");
	scanf("%d",&idade);
	if(strcmp(sexo,"feminino")==0 && idade<25)
	{
	    printf("\n%s ACEITA.",nome);
    }
    else if(strcmp(sexo,"feminino")==0 && idade<=25)
	{
	    printf("\n%s NAO ACEITA.",nome);
    }
    else if(strcmp(sexo,"masculino")==0)
    {
    	printf("\n%s NAO ACEITO.",nome);
	}
	getche();
}
