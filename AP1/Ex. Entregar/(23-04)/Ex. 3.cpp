#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	float final;
	
	printf("Digite um numero : ");
	scanf("%d",&num);
	if(num>30)
	{
		final=(float)num/2;
		printf("\nResultado : %.2f",final);
	}
	else if(num<30)
	{
		final=(float)num*2;
		printf("\nResultado : %.2f",final);
	}
	else if(num==30)
	{
		printf("\nResultado : %d",num);
	}
	getche();
}
