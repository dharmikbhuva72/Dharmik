#include <stdio.h>

void main()
{
	int arr[10];
	int i,even=0,odd=0;
	
	
	for(i=0;i<10;i++)
	{
		printf("\n\n enter a array  [%d] =  ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\t  ELEMENTS ARE ");
	
	for(i=0;i<10;i++)
	{
		printf("\n array [%d] = %d",i,arr[i]);
		
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
	    }
	  
	}
    printf("\n even  number = %d",even);
    printf("\n odd   number = %d",odd);
}