#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,cont=0;
	
	for(x=1;x<=10;x++){
		printf("Digite o n%d : ",x);
		scanf("%d",&y);
		if(y<0){
			cont++;
		}
	}
	printf("\nNegativos : %d",cont);
	getche();
}
