#include <stdio.h>

void fibonsi();

void main()
{
	 fibonsi();
	
}

void fibonsi()
{
	int a1=0,a2=1,a3;
	int n,i;
	printf("\n enter a number ");
	scanf("%d",&n);
	printf("\n %d %d",a1,a2);
	
	for(i=2;i<=n;i++)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		
		printf("%d ",a3);
	}
}