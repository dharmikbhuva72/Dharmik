#include <stdio.h>

void main()
{
	int a=10,b=20;
	int *ptr1,*ptr2;
	ptr1=&a;
	printf("\n ADDRESS OF A = %u",*(&a));
	ptr2=&b;
	printf("\n ADDRESS OF B = %u",*(&b));
}