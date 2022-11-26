#include <stdio.h>

void main()
{
	int arr[5]={10,20,30,40,50};
	
	printf("\n\n------------------------");
	printf("\n DISPLAY ADDRESS  ");
	printf("\n------------------------\n");
	
	printf("\n %u",arr+0);
	printf("\n %u",arr+1);
	printf("\n %u",arr+2);
	printf("\n %u",arr+3);
	printf("\n %u",arr+4);
	
	
	
	
	printf("\n\n--------------------------");
	printf("\n DISPLAY VALUE ");
	printf("\n--------------------------\n");
	
	
	printf("\n %u",*(arr+0));
   	printf("\n %u",*(arr+1));
   	printf("\n %u",*(arr+2));
	printf("\n %u",*arr[3]);
	printf("\n %u",*(arr+4));
	
}