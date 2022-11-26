#include<stdio.h>

void main()
{
	int h=10,f=20;
	
	printf("Before swap h=%d f=%d",h,f);
	
	h=h+f;
	f=h-f;
	h=h-f;
	
	printf("\n\n after swap h=%d f=%d",h,f);
	
}