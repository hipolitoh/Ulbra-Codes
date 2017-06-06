#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2,soma,final1,final2;

	printf("Digite o primeiro numero : ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero : ");
	scanf("%d",&num2);
	soma=num1+num2;
	if(soma>20)
	{
		final1=soma+8;
		printf("\nResultado : %d",final1);
	}
	else if(soma<=20)
	{
		final2=soma-5;
		printf("\nResultado : %d",final2);
	}
	getche();
}
