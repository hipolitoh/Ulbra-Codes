#include<stdio.h>
#include<conio.h>
main()
{
    int n1,n2,resto_div;

	printf("Qual sera o primeiro valor?: ");
	scanf("%d",&n1);
	printf("\nQual sera o segundo valor?: ");
	scanf("%d",&n2);
	resto_div=n1%n2;
	printf("\nO resultado de %d MOD %d sera de: %d",n1,n2,resto_div);
	getche();
}

