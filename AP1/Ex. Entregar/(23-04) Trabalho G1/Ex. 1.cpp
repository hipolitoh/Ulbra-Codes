#include<stdio.h>
#include<conio.h>
main()
{
	float valor_prestacao,valor_restante;
	int prestacoes_pagas;
	
	printf("Qual o valor da prestacao : ");
	scanf("%f",&valor_prestacao);
	printf("\nQuantas prestacoes foram pagas : ");
	scanf("%d",&prestacoes_pagas);
	valor_restante=(30-prestacoes_pagas)*valor_prestacao;
	printf("\nValor restante do financiamento : %.2f",valor_restante);
	getche();
}
