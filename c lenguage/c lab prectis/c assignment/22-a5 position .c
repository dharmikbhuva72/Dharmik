#include <stdio.h>

void main ()
{
	int i, arr[10],n ,position, search ;
	
	printf("enter a size of elements   = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n elements is  %d   == ",i);
		scanf("%d",&arr[i]);
		
	}
	
	printf("\n ENTER  A SEARCH ELEMENTS   : ");
	scanf("%d",&search);
	
	position = 0;
	
	for(i=1;i<=n;i++)
	{
		if(arr[i] == search)
		{
			position= 1 ;
			break;
		}
		
	}
	if(position==1)
	{
		printf("\n enter a search elements of position  %d",i);
		
	}
	else
	{
		printf("\n invalide choice ");
	}
}