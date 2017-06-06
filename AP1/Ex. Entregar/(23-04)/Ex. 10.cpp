#include<stdio.h>
#include<conio.h>
main()
{
	int macas;
	float total;
	
	printf("Quantas macas foram compradas : ");
	scanf("%d",&macas);
	if(macas<12)
	{
		total=macas*1.30;
		printf("\nVoce vai gastar : %.2f",total);
	}
	else if(macas>=12)
	{
		total=macas*1.00;
		printf("\nVoce vai gastar : %.2f",total);
	}
	getche();
}
