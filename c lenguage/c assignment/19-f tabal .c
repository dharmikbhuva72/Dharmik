#include<stdio.h>

void main()
{
	int a , number , tabal;
	
	printf("\n ENTER THE NUMBER  :");
	scanf("%d",&number);
	printf("\n\n------------------------");
	printf("\n\t TABAL ");
	printf("\n -------------------------");
	
	
	for(a=1; a<=10;a++)
	{
		tabal = number*a;
		printf("\n %d  * %d  = %d ",number,a,tabal);
	}
	 
}