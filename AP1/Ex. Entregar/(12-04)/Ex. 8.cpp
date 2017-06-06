#include<stdio.h>
#include<conio.h>
main()
{
    int NRO_COELHOS;
	float CUSTO;
	
	printf("Quantos coelhos	voce tem?: ");
	scanf("%d",&NRO_COELHOS);
	CUSTO=(NRO_COELHOS*0.70)/(18+10);
	printf("\nO custo de criacao dos coelhos sera de: %.2f",CUSTO);
    getche();
}

