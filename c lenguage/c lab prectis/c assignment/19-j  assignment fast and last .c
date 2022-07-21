#include<stdio.h>

void main()
{
	int num ,  sum=0, lastdigit;
	
	printf("\n ENTHER THE NUMBER   :");
	scanf("%d",&num);
	
	lastdigit = num % 10;
	
	while (num>=10)
	{
		num=num/10;
		
    }
	sum = lastdigit +num;
	
	printf("\n\nsummation is fast and last digit  %d ",sum); 
}