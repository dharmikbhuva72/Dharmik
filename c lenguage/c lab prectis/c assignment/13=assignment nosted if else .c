#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("\nENTER A      :");
	scanf("%d",&a);
	printf("\nENTER B      :");
	scanf("%d",&b);
	printf("\nENTER C      :");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A IS GRETAR");
			
		}
		else
		{
			printf("C IS GRETAR");
			
		}
	}
	else 
	{
		if(b>c)
		{
			printf("B IS GRETAR");
			
		}
		else
		{
			printf("C IS GRETAR");
		}
	}
}