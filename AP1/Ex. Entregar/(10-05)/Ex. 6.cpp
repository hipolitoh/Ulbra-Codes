#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z=0;
	
	printf("Digite um numero : ");
	scanf("%d",&y);
	for(x=1;x<y;x++){
		z++;
		printf("\n%d\n",z);
	}
	getche();
}
