#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Digite um numero : ");
	scanf("%d",&x);
	while(x>=0){
		x--;
		printf("%d\n",x);
	}
}
