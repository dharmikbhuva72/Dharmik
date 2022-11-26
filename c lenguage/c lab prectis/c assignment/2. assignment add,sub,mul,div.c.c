#include<stdio.h>

void main()
{
	int a,b,add,sub,mul;
	float div;
	
	printf("\n ENTEER A  : \t");
	scanf("%d",&a);
	printf("\n ENTTER B  : \t");
	scanf("%d",&b);
    printf("\n A = %d ,B = %d ",a,b);
		
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/(float)b;

    
    printf("\n ADDITION IS    : %d   ",add);
    printf("\n SUBTRECTION IS  : %d  ",sub); 
    printf("\n MULTIFICATION IS : %d  ",mul);
    printf("\n DIVITION  IS    : %f  ",div);
}