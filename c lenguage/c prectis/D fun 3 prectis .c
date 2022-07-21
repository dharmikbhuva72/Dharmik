#include<stdio.h>

int mul(int A , int B);

int main()
{
	int a , b , c ;
	printf("\n\n ENTER A   :");
	scanf("%d",&a);
	printf("\n\n ENTER B   :");
	scanf("%d",&b);
	c = mul(a,b);
	
	printf("\n\n MULTIPLICATION  IS %d ",a,b);
}

int mul(int A , int B)
{
	//printf("A = %d ,B = %d",A,B);
	
	return A*B;
}