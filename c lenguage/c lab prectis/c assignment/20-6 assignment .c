#include<stdio.h>

void main()
{
	int a,b,c;
	
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=a;c>=1;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	
}