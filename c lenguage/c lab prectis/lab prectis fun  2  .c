#include<stdio.h>

void add(int n1 ,int n2);

void main()
{
	int a, b ;
	
	printf("\n ENTER  A  : ");
	scanf("%d",&a);
	printf("\n ENTER  B  : ");
	scanf("%d",&b);
	printf("\n A = %d ,B = %d",a,b);
	add(a,b);
}

void add(int n1 ,int n2)
{
	printf("\n ADDITION IS  %d",(n1+n2));
	
}