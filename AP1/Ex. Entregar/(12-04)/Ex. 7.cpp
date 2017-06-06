#include<stdio.h>
#include<conio.h>
main()
{
    int n1,quadrado;
	
	printf("Qual o numero que sera elevado ao quadrado?: ");
	scanf("%d",&n1);
	quadrado=n1*n1;
	printf("\nResultado de %d ao quadrado: %d",n1,quadrado);
	getche();
}

