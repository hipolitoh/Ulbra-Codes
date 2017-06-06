#include<stdio.h>
#include<conio.h>
main()
{
	int codigo,x,codigomaior=0;
	float altura,alturamaior=0;
	
	for(x=1;x<=10;x++){
		printf("Qual o codigo do aluno : ");
	    scanf("%d",&codigo);
	    printf("\nQual a altura do aluno : ");
	    scanf("%f",&altura);
	    printf("\n");
	    if(altura>alturamaior){
	    	alturamaior=altura;
	    	codigomaior=codigo;
		}
    }
    printf("Codigo do maior = %d\n\nAltura do Maior = %f",codigomaior,alturamaior);
    getche();
}
