#include<stdio.h>

void main()
{
	int a,b=1,c;
	
	for(a=1;a<=3;a++)
	{
		for(c=1;c<=a;c++)
		{
			printf(" %d",b);
			b=b+2;
		}
		printf("\n");
		
		
	}
}