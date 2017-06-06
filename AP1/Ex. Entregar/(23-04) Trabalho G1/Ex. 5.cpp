#include<stdio.h>
#include<conio.h>
main()
{
	float salario_fixo,valor_vendas,salario_total;
	
	printf("Qual seu salario fixo : ");
	scanf("%f",&salario_fixo);
	printf("\nQuanto voce vendeu : ");
	scanf("%f",&valor_vendas);
	if(valor_vendas>15000)
	{
		salario_total=(valor_vendas*0.25)+salario_fixo;
		printf("\nSalario total : %.2f",salario_total);
	}
	if(valor_vendas>=5000 && valor_vendas<=15000)
	{
		salario_total=(valor_vendas*0.18)+salario_fixo;
		printf("\nSalario total : %.2f",salario_total);
	}
	if(valor_vendas<5000)
	{
		salario_total=(valor_vendas*0.07)+salario_fixo;
		printf("\nSalario total : %.2f",salario_total);
	}
	getche();
}
