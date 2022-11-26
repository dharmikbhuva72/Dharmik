#include<stdio.h>


void main()
{
	int a, b, c;
	printf("ENTER A      :   ");
	scanf("%d",&a);
	printf("ENTER B      :   ");
	scanf("%d",&b);
	printf("ENTER C      :   ");
	scanf("%d",&c);
	printf("A = %d,B = %d,C= %d",a,b,c);
	
	
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA IS GRETER");
		}
		else
		{
			printf("\nC IS GRETER");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB IS GRETER");
		}
		else
		{
			printf("\nC IS GRETER");
		}
	}
	
}