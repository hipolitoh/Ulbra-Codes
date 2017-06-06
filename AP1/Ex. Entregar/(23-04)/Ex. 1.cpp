#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	
	printf("Digite um numero : ");
	scanf("%d",&num);
	if(num<100 | num>1000)
	{
		printf("\n%d nao esta na faixa entre 100 e 1000",num);
	}
	else if(num>100 | num<1000)
	{
		printf("\n%d esta na faixa entre 100 e 1000",num);
	}
	getche();
}
