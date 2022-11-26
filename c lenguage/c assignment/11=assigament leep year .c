#include<stdio.h>

void main()
{
	int year;
	
	printf("\n ENTER THE YEAR     :\t");
	scanf("%d",&year);
	
	if (year%400==0)
	{
		printf("\n %d is leep year   : ",year);
		
	}
	else if (year%4==0)
	{
		printf("\n%d  is leep year   : ",year);
		
	}
	else 
	{
		printf("\n%d is not leep year :",year);
	}
}