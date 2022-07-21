#include <stdio.h>

void main()
{
	int A=10 ,B=20;
	int *i1,*i2;
	
	i1=&A;
	i2=&B;
	printf("\n ADDRESS OF A  %u",*(i1));
	
	printf("\n ADDRESS OF B %u",*(i2));
}