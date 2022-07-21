#include<stdio.h>
int addition(int n);
int main()
{
	int num;
	printf("enter the number ");
	scanf("%d",&num);
    printf("\n\n------------------------------");
	printf("\n         sum = %d",addition (num));
	printf("\n------------------------------");
    return 0;
}

int addition(int n)
{
	if(n != 0)
	return n+addition(n-1);
	
	else
	return n;
}