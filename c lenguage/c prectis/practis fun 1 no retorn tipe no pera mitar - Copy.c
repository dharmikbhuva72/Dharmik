#include<stdio.h>
void sqr();

void main()
{
	printf("\n in main cord start");
	sqr();
	printf("\n in main cord ended");
	
}
void sqr()
{
	int a = 3;
	printf("\n square is %d",(a*a));
}