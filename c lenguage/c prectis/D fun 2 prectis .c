#include<stdio.h>

void main()
{
	int a,b;
	printf("ENTER  A   :");
	scanf("%d",&a);
	printf("ENTER  B   :");
	scanf("%d",&b);
	
	
	add(a,b);
}


void add(int n1,int n2)
{
	//printf("%d , %d",n1,n2);
	printf("\n ADDITION IS %d",n1+n2);
}