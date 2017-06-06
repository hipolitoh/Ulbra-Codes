#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z=0;
	
	for(x=1;x<=5;x++){
		printf("Tabuada do %d\n",x);
		for(y=1;y<=10;y++){
			z=x*y;
		    printf("%dx%d=%d\n",x,y,z);
	    }
	}
	getche();
}
