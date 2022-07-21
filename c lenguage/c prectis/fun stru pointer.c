#include<stdio.h>
void addition(int *a,int *b);

struct{
	int a;
	int b;
	
}s1;
void main()
{
	int *ptr1,*ptr2;
	s1.a = 10;
	s1.b = 20;

	ptr1 = s1.a;
	ptr2 = s1.b;	
	printf("\nbefore swap A = %d ,B = %d",*(&ptr1),*(&ptr2));
	addition(&ptr1,&ptr2);
	printf("\nafter swap A = %d ,B = %d",ptr1,ptr2);
}

void addition(int *a,int *b)
{
	int t;
	
	t = *a;
	*a = *b;
	*b = t;
}
