#include<stdio.h>

void main()
{

	int a,b,c,d;
	
	for (a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf(" *");
		}
		printf("\n");
			
	}
	for(c=1;c<=4;c++)
	{
		for(d=c;d<=4;d++)
		{
			printf("*");
		}
		printf("\n");
	}
}