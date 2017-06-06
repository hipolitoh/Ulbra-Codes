#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,contse=0,contelse=0;
	
	for(x=1;x<=10;x++){
		printf("Digite o n%d : ",x);
		scanf("%d",&y);
		if(y>=10 & y<=20){
			contse++;
		}
		else{
			contelse++;
		}
	}
	printf("\nEntre [10,20] : %d\nFora Deste Intervalo : %d",contse,contelse);
	getche();
}
