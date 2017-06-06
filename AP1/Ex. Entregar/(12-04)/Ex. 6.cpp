#include<stdio.h>
#include<conio.h>
main()
{
    float base,altura,area_triangulo;
	
	printf("Qual a base do triangulo?: ");
	scanf("%f",&base);
	printf("\nQual a altura do triangulo?: ");
	scanf("%f",&altura);
	area_triangulo=(base*altura)/2;
	printf("\nArea do triangulo: %.2f",area_triangulo);
	getche();
}

