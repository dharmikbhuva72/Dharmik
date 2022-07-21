#include<stdio.h>

void sort (int n, int *ptr);

void main ()
{
	int arr[5],n,i;
	printf("\n ENTER A SIZE OF ARRAY   :  ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n ENTER THE ARRAY  : ");
		scanf("%d",&arr[i]);
	}
	sort(n,arr);
}

void sort (int n, int *ptr)
{
	int i,j,t;
	for(i = 0 ; i < n ; i++)
	{
		for(j=i + 1 ; j < n; j++)
		{
			if(*(ptr +j ) < *(ptr + i) )
		    {
			    t = *(ptr + i);
			    *(ptr + i) = *(ptr + j);
			    *(ptr + j) = t ;
	    	}
	
		}
		
	}
	for(i =0; i <n;i++)
	printf(" \t %d",*(ptr + i));
}