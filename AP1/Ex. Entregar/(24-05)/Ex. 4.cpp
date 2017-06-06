#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2;
	float div;
	
	do{
		printf("Digite o primeiro numero : ");
		scanf("%d",&n1);
	}while(n1<=0);
	do{
		printf("\nDigite o segundo numero : ");
		scanf("%d",&n2);
	}while(n2>=n1 || n2==0);
	div=(float)n1/n2;
	printf("\n%.2f",div);
	getche();
}
