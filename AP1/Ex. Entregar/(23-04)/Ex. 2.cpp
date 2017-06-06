#include<stdio.h>
#include<conio.h>
main()
{
	int cargo;
	float salario,salario_final;
	
	printf("Digite 1 para tecnico, 2 para gerente, 3 para outro cargo : ");
	scanf("%d",&cargo);
	if(cargo==1)
	{
		printf("\nQual seu salario : ");
		scanf("%f",&salario);
		salario_final=1.50*salario;
		printf("\nSeu salario sera de : %.2f",salario_final);
	}
	else if(cargo==2)
	{
		printf("\nQual seu salario : ");
		scanf("%f",&salario);
		salario_final=1.30*salario;
		printf("\nSeu salario sera de : %.2f",salario_final);
	}
	else if(cargo==3)
	{
		printf("\nQual seu salario : ");
		scanf("%f",&salario);
		salario_final=1.20*salario;
		printf("\nSeu salario sera de : %.2f",salario_final);
	}
	getche();
}
