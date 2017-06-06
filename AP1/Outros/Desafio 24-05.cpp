#include<stdio.h>
#include<conio.h>
main()
{
	int resp;
	float n1,n2,media;
	
	do{
	printf("Qual sua nota 1 : ");
	scanf("%f",&n1);
	printf("\nQual sua nota 2 : ");
	scanf("%f",&n2);
	media=(n1+n2)/2;
	printf("\nMedia = %.2f",media);
	printf("\n\nPara continuar fazendo media digite 1,se nao digite qualquer coisa : ");
	scanf("%d",&resp);
	printf("\n");
    }while(resp==1);
    getche();
	
}
