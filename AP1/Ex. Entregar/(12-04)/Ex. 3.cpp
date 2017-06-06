#include<stdio.h>
#include<conio.h>
main()
{
    float a,b,X;
	
	printf("Insira o primeiro valor a ser somado: ");
	scanf("%f",&a);
	printf("\nInsira o segundo valor a ser somado: ");
	scanf("%f",&b);
	X=a+b;
	printf("\nValor de X: %.2f",X);
	getche();
}
