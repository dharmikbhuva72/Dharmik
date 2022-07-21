#include<stdio.h>

void main()
{
	int a,fact=24,num;
	printf("enter the number  : ");
	scanf("%d",&num);
	
	for(a=1;a>=num;a++)
	{
		fact=fact*a;
		
	}
	printf("\n factrial of %d is   : %d ",num,fact);
}