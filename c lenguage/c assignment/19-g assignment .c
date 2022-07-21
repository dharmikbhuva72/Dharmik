#include<stdio.h>

void main()
{
	int n , r ,a;
	printf("ENTER THE NUMBER  :");
	scanf("%d",&n);
	
	while (n>0)
	{
		r=n % 10;
		  printf("%d",r);
		  n=n/10;
	}
}