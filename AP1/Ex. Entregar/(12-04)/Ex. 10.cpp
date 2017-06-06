#include<stdio.h>
#include<conio.h>
main()
{
    int quantidade_comprada;
	float preco_produto,compra;
	
	printf("Qual o preco do produto?: ");
	scanf("%f",&preco_produto);
	printf("\nQual foi a quantidade comprada?: ");
	scanf("%d",&quantidade_comprada);
	compra=preco_produto*quantidade_comprada;
	printf("\nO preco total de sua compra sera de: %.2f",compra);
	getche();
}

