#include<stdio.h>

void swaping(int *n1,int *n2);

void main ()
{
	int a,b;
	
	printf("ENTER A   :  ");
	scanf("%d",&a);
	printf("ENTER B   :  ");
	scanf("%d",&b);
	
	printf("\n befor swaping A = %d , B = %d",a,b);
    swaping(&a,&b);
	printf("\n after swaping A = %d , B = %d",a,b);	
}
void swaping(int *n1,int *n2)
{
	int z;
    z   = *n1;
	*n1 = *n2;
	*n2 = z;
	
	 
}