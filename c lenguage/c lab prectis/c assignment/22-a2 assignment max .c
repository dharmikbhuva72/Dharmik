#include <stdio.h>

void main()
{
	int i,max=0,arr[10];
	
	for (i=0;i<10;i++)
	{
		printf("\n enter the elements  [%d]  = ",i);
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<10;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("\n the max number is %d",max);
}