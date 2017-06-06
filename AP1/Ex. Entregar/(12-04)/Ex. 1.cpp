#include<stdio.h>
#include<conio.h>
main()
{
	int numero_funcionario;
	float horas_trabalhadas,valor_hora,salario;
	
	printf("Qual o numero do funcionario?: ");
	scanf("%d",&numero_funcionario);
	printf("\nQuantas horas o funcionario de numero (%d) trabalhou?: ",numero_funcionario);
	scanf("%f",&horas_trabalhadas);
	printf("\nQual o valor que recebe por hora o funcionario de numero (%d)?: ",numero_funcionario);
	scanf("%f",&valor_hora);
	salario=(horas_trabalhadas*valor_hora);
	printf("\nO funcionario de numero (%d) tem um salario de: %.2f",numero_funcionario,salario);
	getche();
}
