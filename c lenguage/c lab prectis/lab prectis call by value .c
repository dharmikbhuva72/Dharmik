#include <stdio.h>	

void main()
{
	int a = 10, b =  20 ;
	printf("\n befor swap  a =%d ,b =%d",a,b);
	swap(a,b);
	printf("\n after swap  A = %d,B = %d",a,b);
}

void swap(int A,int B)
{
	int C;
	C=A;
	A=B;
	B=C;
	
}
