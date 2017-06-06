#include<stdio.h>
#include<conio.h>
main()
{
	float qntatual,qntmax,qntmin,qntmed;
	
	printf("Qual a quantidade atual em estoque : ");
	scanf("%f",&qntatual);
	printf("\nQual a quantidade maxima em estoque : ");
	scanf("%f",&qntmax);
	printf("\nQual a quantidade minima em estoque : ");
	scanf("%f",&qntmin);
	qntmed=(qntmax+qntmin)/2;
	printf("\nQuantidade media : %.2f",qntmed);
	if(qntatual>=qntmed)
	{
		printf("\n\nNao efetuar compra");
	}
	else if(qntatual<qntmed)
	{
		printf("\n\nEfetuar compra");
	}
	getche();
}
