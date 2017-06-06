#include<string.h>
#include<conio.h>
#include<stdio.h>
main()
{
	char tipo[100];
	float percurso,gasolina;
	
	printf("Quantos KMs tem seu percurso : ");
	scanf("%f",&percurso);
	printf("\nVoce tem 3 opcoes de tipo de carro (A,B e C)...\n\nQual voce vai usar : ");
	scanf("%s",&tipo);
	if(strcmp(tipo,"A")==0)
	{
		gasolina=percurso/8;
		printf("\nVoce vai gastar %.2f litros de gasolina",gasolina);
	}
	else if(strcmp(tipo,"B")==0)
	{
		gasolina=percurso/9;
		printf("\nVoce vai gastar %.2f litros de gasolina",gasolina);
	}
	else if(strcmp(tipo,"C")==0)
	{
		gasolina=percurso/12;
		printf("\nVoce vai gastar %.2f litros de gasolina",gasolina);
	}
	getche();
}
