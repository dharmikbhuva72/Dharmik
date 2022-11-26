#include <stdio.h>

void main ()
{
	int i,sum=0,arr[10];
	float average ;
	
	for(i=0;i<10;i++)
	{
    	printf("\n enter a elements  %d = ",i);
	    scanf("%d",&arr[i]);
    }
	for(i=0;i<10;i++)
	{
		printf("\n elements %d",i,arr[i]);
		sum=sum+arr[i];
		average = sum / (float) 10;
	}
	printf("\n THE SUMMATION IS %d",sum);
	printf("\n THE AVERAGE  IS  %.2f1",average);
}
