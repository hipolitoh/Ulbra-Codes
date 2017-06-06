#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,mod;
	float resultado;
	
	printf("Digite o primeiro numero : ");
	scanf("%d",&n1);
	printf("\nDigite o segundo numero : ");
	scanf("%d",&n2);
	if(n1>n2)
	{
		resultado=(float)n1/n2;
		mod=(int)resultado%2;
		if(mod==0)
		{
			printf("\nPrimeiro numero : %d\n\nSegundo numero : %d\n\nResultado da divisao do maior pelo menor : %.2f e par",n1,n2,resultado);
		}
		else if(mod==1)
		{
			printf("\nPrimeiro numero : %d\n\nSegundo numero : %d\n\nResultado da divisao do maior pelo menor : %.2f e impar",n1,n2,resultado);
		}
	}
	else if(n2>n1)
	{
		resultado=(float)n2/n1;
		mod=(int)resultado%2;
		if(mod==0)
		{
			printf("\nPrimeiro numero : %d\n\nSegundo numero : %d\n\nResultado da divisao do maior pelo menor : %.2f e par",n1,n2,resultado);
		}
		else if(mod==1)
		{
			printf("\nPrimeiro numero : %d\n\nSegundo numero : %d\n\nResultado da divisao do maior pelo menor : %.2f e impar",n1,n2,resultado);
		}
	}
	getche();
}
