#include<stdio.h>
#include<conio.h>
main()
{
	int senha;
	
	printf("Digite a senha com 4 algarismos : ");
	do
	{
	scanf("%d",&senha);
	if(senha==1234)
	{
		printf("\nACESSO PERMITIDO");
	}
	else if(senha!=1234)
	{
		printf("\nACESSO NEGADO\n\nDigite a senha novamente : ");
	}
	}while(senha!=1234);
	getche();
}
