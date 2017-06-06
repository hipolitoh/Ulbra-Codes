#include<stdio.h>
#include<conio.h>
main()
{
	int x=0;
	char resp;
	float sal,saltotal=0,media;
	
	do{
		printf("Qual seu salario : ");
		scanf("%f",&sal);
		saltotal=saltotal+sal;
		x++;
		printf("\nDigite (s) para continuar ou qualquer tecla para concluir : ");
		scanf("%s",&resp);
		printf("\n");
		}while(resp=='s');
		media=(float)saltotal/x;
		printf("\nMedia salarial : %.2f",media);
		getche();
}
