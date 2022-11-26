#include <stdio.h>

void main ()
{
	int a,b,add;
	int *ptr1,*ptr2;
	
	printf("enter A  : ");
	scanf("%d",&a);
	printf("enter B  : ");
	scanf("%d",&b);
	printf("\n A = %d , B = %d ",a,b);
	ptr1 = &a;
	ptr2 = &b;
	printf("\n addition is  : %u",*(ptr1)+*(ptr2));
}
