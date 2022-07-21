#include<stdio.h>

void main()
{
	int a,b,c, max ;
	
	printf("ENTER A   :");
	scanf("%d",&a);
	printf("ENTER B   :");
	scanf("%d",&b);
	printf("ENTER C   :");
	scanf("%d",&c);
	
	
	max=a>b ? (a>c?a:c):(b>c?b:c);
	printf(" GRETAR VELUE IS  %d",max);
	
	
}