#include<stdio.h>
#include<conio.h>
main()
{
	int numconta;
	float saldo,debito,credito,saldoatual;
	
	printf("Qual o numero da conta : ");
	scanf("%d",&numconta);
	printf("\nQual seu saldo : ");
	scanf("%f",&saldo);
	printf("\nQual seu debito : ");
	scanf("%f",&debito);
	printf("\nQual seu credito : ");
	scanf("%f",&credito);
	saldoatual=(saldo-debito)+credito;
	printf("\nSaldo atual : %.2f",saldoatual);
	if(saldoatual>=0)
	{
		printf("\n\nSaldo Positivo");
	}
	else if(saldoatual<0)
	{
		printf("\n\nSaldo Negativo");
	}
	getche();
}
