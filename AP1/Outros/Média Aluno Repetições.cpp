#include<stdio.h>
#include<conio.h>
main()
{
	int x,repetir;
	float n1,n2,media,soma=0,media_alunos;
	
	printf("Quantas medias voce vai fazer : ");
	scanf("%d",&repetir);
	for(x=1;x<=repetir;x++){
	printf("\nAluno %d\n",x);
	printf("Qual sua nota 1: ");
	scanf("%f",&n1);
	printf("Qual sua nota 2: ");
	scanf("%f",&n2);
	media=(n1+n2)/2;
	printf("Sua media : %.2f\n",media);
	soma=soma+media;
    }
    media_alunos=soma/repetir;
    printf("\nMedia de todos os alunos : %.2f",media_alunos);
    getche();
}
