#include <stdio.h>

void main ()
{
	int a,b,c;
	
	for(a=1;a<=5;a++)
	{
		for (b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=b;c<=5;c++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
	for(a=4;a>=1;a--)
	{
		for(b=0;b<=4-a;b++)
		{
			printf(" ");			
		}
		for(c=4;c>=b;c--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
