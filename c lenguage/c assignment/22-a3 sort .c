#include <stdio.h>

void main ()
{
	int a,b,c,n,arr[5] ;
	printf("\n ENTER SIZE OF ARRAY   ");
	scanf("%d",&n);
	
	for(a=0;a<n;a++)
	{
		printf("\n ENTER ELEMENTS   %d  = ",a);
		scanf("%d",&arr[a]);
}
		for(a=1;a<=n;a++)
		{
			for(b=a+1;b<=n;b++)
			{
				if(arr[a] > arr[b])
				{
					c=arr[a];
					arr[a]=arr[b];
					arr[b]=c;
					
				}
			}
		}
		
	
	for(a=1;a<=n;a++)
	{
		printf("\n sort elements is %d",a);
	}
		
	
}