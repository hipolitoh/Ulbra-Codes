#include<stdio.h>
#include<conio.h>
main()
{
	int x,idade,soma=0;
	float media;
	
	for(x=1;x<=8;x++){
	    printf("Qual sua idade individuo n%d : ",x);
	    scanf("%d",&idade);
	    printf("\n");
	    soma=soma+idade;
    }
    media=(float)soma/8;
    printf("Media = %.2f",media);
    getche();
}
