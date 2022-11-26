#include<stdio.h>

void main()
{
	int a = 0, b = 1 ,c,i ,num;
	
	printf("ENTER THE NUMBER   : ");
	scanf("%d",&num);
	printf("\n %d %d",a,b);
	
	for (i=2;i<num;i++)
	{
		c=a+b;
		a=b;
		b=c;
	
		printf(" %d",c);
		
	}
}