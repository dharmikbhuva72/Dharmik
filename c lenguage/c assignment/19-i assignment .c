#include<stdio.h>

void main()
{
	int num ,sum=0,m;
	
	printf("enter any number to find sum of its digit   :");
	scanf("%d",& num);
	
	while (num>0)
	{
		m=num %10;
		sum=sum+m;
		num=num/10;
	}
	printf("\n sum is %d",sum);
}