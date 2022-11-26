#include<stdio.h>

void max();

void main()
{
	maximum();
}

void maximum()
{
	int i,a,m[5],max;
	 
	for(a=0;a<5;a++)
	{
	    printf("enter elements  = ");
	    scanf("%d",&m[a]);
	    
    }
    max=m[0];
    
    for(a=0;a<5;a++)
    {
   		if (max < m[a])
   		{
   			max=m[a];
	    }
    	
	}
	printf("\n the max nuuber is %d",max);
	
}