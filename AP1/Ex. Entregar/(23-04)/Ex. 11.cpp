#include<string.h>
#include<conio.h>
#include<stdio.h>
main()
{
	char time1[100],time2[100];
	int gol1,gol2;
	
	printf("Qual nome do time 1 : ");
	gets(time1);
	printf("\nQual nome do time 2 : ");
	gets(time2);
	printf("\nQuantos gols o time 1 fez : ");
	scanf("%d",&gol1);
	printf("\nQuantos gols o time 2 fez : ");
	scanf("%d",&gol2);
	if(gol1>gol2)
	{
		printf("\n%s VENCEU",time1);
	}
	else if(gol2>gol1)
	{
		printf("\n%s VENCEU",time2);
	}
	else if(gol1==gol2)
	{
		printf("\nEMPATE");
	}
	getche();
}
