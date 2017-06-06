#include<stdio.h>
#include<conio.h>
main()
{
    float n1,n2,n3,media_aritmetica;
	
	printf("Qual foi sua nota 1?: ");
	scanf("%f",&n1);
	printf("\nQual foi sua nota 2?: ");
	scanf("%f",&n2);
	printf("\nQual foi sua nota 3?: ");
	scanf("%f",&n3);
	media_aritmetica=(n1+n2+n3)/3;
	printf("\nSua media aritmetica: %.2f",media_aritmetica);
	getche();
}

