#include<stdio.h>

void main ()
{
	int no1,no2,cal;
	printf("ENTER NO 1  :");
	scanf("%d",&no1);
	printf("ENTER NO 2  :");
	scanf("%d",&no2);
	cal=add(no1,no2);
	printf(" ADDITION IS %d",cal);
}

int add (int a , int b)
{
	return a+b;
}