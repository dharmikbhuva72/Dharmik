#include<stdio.h>
void swap(int *n1,int *n2);
void main()
{
	int a =10, b=20;
	printf("\n befor swaping A = %d , B = %d",a,b);
	swap(&a,&b);
	printf("\n after swaping A = %d , B  = %d",a,b);
}

void swap(int *n1,int *n2)
{
	int z;
	z = *n1;
   	*n1 = *n2;
   	*n2=z;
}
