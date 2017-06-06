#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2,num3,soma;

	printf("Digite o primeiro numero : ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero : ");
	scanf("%d",&num2);
	printf("\nDigite o terceiro numero : ");
	scanf("%d",&num3);
	soma=(num1+num2)+num3;
	if(soma>50)
	{
		printf("\nA soma dos tres numeros : %d>50",soma);
	}
	getche();
}
