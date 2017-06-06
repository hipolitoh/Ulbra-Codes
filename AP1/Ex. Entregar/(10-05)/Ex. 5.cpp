#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	
	printf("Quantas vezes repetir : ");
	scanf("%d",&y);
	for(x=1;x<=y;x++){
		printf("\nP R O G R A M A C A O %d\n",x);
	}
	getche();
}
