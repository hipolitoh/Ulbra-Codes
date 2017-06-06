#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	
	printf("Qual tabuada voce quer : ");
	scanf("%d",&x);
	for(y=1;y<=10;y++){
		z=x*y;
		printf("\n%d\n",z);
	}
	getche();
}
