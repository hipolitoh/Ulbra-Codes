#include<stdio.h>
#include<conio.h>
main()
{
    int n1,n2,inteiro_div;
	
	printf("Qual sera o primeiro valor?: ");
	scanf("%d",&n1);
	printf("\nQual sera o segundo valor?: ");
	scanf("%d",&n2);
	inteiro_div=n2/n1;
	printf("\nO resultado de %d DIV %d sera de: %d",n2,n1,inteiro_div);
	getche();
}

