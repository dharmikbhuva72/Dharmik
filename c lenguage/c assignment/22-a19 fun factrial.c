#include <stdio.h>

void fact ();

void main()
{
	fact ();
}

void fact ()
{
	int a, n,fact =1 ;
	
	printf("\n ENTER YOUR NUMBER   ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
       		
    }
	printf("the factorial is %d",fact); 
}