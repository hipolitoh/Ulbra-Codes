#include<stdio.h>
#include<conio.h>
main()
{
	int menu;
	
	printf("Você tem 4 opcoes de cores :\n\n1-Azul\n\n2-Preto\n\n3-Rosa\n\n4-Vermelho\n\nQual cor voce deseja : ");
	scanf("%d",&menu);
	while(menu<1 && menu>4){
	printf("Erro!!! Informe outro valor : ");
	scanf("%d",&menu);
    }
    getche();
}
