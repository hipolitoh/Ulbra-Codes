#include<stdio.h>
#include<conio.h>
main()
{
    float valor_lucro,preco_custo,preco_venda;
	
	printf("Qual o preco de custo do seu produto?: ");
	scanf("%f",&preco_custo);
	printf("\nQual o preco de venda do seu produto?: ");
	scanf("%f",&preco_venda);
	valor_lucro=preco_venda-preco_custo;
	printf("\nSeu lucro sera de: %.2f",valor_lucro);
	getche();
}

