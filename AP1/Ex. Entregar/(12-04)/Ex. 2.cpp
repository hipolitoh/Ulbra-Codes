#include<stdio.h>
#include<conio.h>
main()
{
	int codigo_p1,quantidade_v1,codigo_p2,quantidade_v2;
	float valor_u1,valor_u2,valor_total;
	
	printf("Qual o codigo da primeira peca?: ");
	scanf("%d",&codigo_p1);
	printf("\nQuantas pecas do codigo (%d) foram vendidas?: ",codigo_p1);
	scanf("%d",&quantidade_v1);
	printf("\nQual o valor unitario da peca com codigo (%d): ",codigo_p1);
	scanf("%f",&valor_u1);
	printf("\nQual o codigo da segunda peca?: ");
	scanf("%d",&codigo_p2);
	printf("\nQuantas pecas do codigo (%d) foram vendidas?: ",codigo_p2);
	scanf("%d",&quantidade_v2);
	printf("\nQual o valor unitario da peca com codigo (%d): ",codigo_p2);
	scanf("%f",&valor_u2);
	valor_total=(quantidade_v1*valor_u1)+(quantidade_v2*valor_u2);
	printf("\nO valor total da compra das pecas com codigo (%d e %d) foi de: %.2f",codigo_p1,codigo_p2,valor_total);
	getche();
}
