#include<stdio.h>

void main()
{
	int a=20,b=30;
	int *ptr1,*ptr2;
	
	ptr1=&a;
	ptr2=&b;
	
	printf("\n before sweping A =%u ,B = %u",*(ptr1),*(ptr2));
	
    *ptr1 = (*ptr1)*(*ptr2);
	*ptr2 = (*ptr1)/(*ptr2);
 	*ptr1  = (*ptr1)/(*ptr2);
 	
 	
 	printf("\n after sweping A =%u ,B = %u",*(ptr1),*(ptr2));
}