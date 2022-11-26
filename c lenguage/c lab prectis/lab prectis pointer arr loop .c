#include <stdio.h>

void main()
{
	int arr[5]={10,20,30,40,50};
	int i;
	 
	printf("\n\n address"); 
	for(i=0;i<5;i++)
	{
		
	    printf("\n\ndisplay address %u",&arr[i]);
	}
	printf("\n\n value ");
	
	for(i=0;i<5;i++)
	{
		
		printf("\n\ndisplay value %u ",*(&arr[i]));
	}
}