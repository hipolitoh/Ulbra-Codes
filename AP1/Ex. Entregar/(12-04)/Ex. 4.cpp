#include<stdio.h>
#include<conio.h>
main()
{
	int A,B,adi_ab,sub_ab,mul_ab;
	float div_ab;
	
	printf("Qual o valor de A?: ");
	scanf("%d",&A);
	printf("\nQual o valor de B?: ");
	scanf("%d",&B);
	adi_ab=A+B;
	sub_ab=A-B;
	mul_ab=A*B;
	div_ab=(float)A/B;
	printf("\nO resultado de %d+%d: %d\n\nO resultado de %d-%d: %d\n\nO resultado de %d*%d: %d\n\nO resultado de %d/%d: %.2f",A,B,adi_ab,A,B,sub_ab,A,B,mul_ab,A,B,div_ab);
    getche();
}

