#include<stdio.h>

int mul(int A , int B);

void main()
{
	int a , b,c;
	
	printf("\n ENTER  A  : ");
	scanf("%d",&a);
	printf("\n ENTER  B  : ");
	scanf("%d",&b);
	printf("\n A = %d ,B = %d",a,b);
	c = mul(a,b);
	printf("\n\n MULTIPLICATION IS   %d",c);
}
int mul(int A , int B)
{
	//printf("%d  %d",A,B);
    return A*B;
	
}