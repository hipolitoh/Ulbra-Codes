#include<stdio.h>
#include<conio.h>
main()
{
	char nome[100];
	int idade;
	
	printf("Qual seu nome : ");
	gets(nome);
	printf("\nQual sua idade : ");
	scanf("%d",&idade);
	if(idade>=5 && idade<=10)
	{
		printf("\nNome : %s\n\nCategoria : Infantil",nome);
	}
	else if(idade>=11 && idade<=17)
	{
		printf("\nNome : %s\n\nCategoria : Juvenil",nome);
	}
	else if(idade>=18)
	{
		printf("\nNome : %s\n\nCategoria : Adulto",nome);
	}
	getche();
}
