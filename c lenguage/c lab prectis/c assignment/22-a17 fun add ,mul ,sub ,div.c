#include <stdio.h>

void add(int A , int B);
void sub(int A , int B);
void mul(int A , int B);
void div(int A , int B);
void main()

{
	int a,b;
	
	printf("\n ENTER A ELEMENTS  ");
	scanf("%d",&a);
	printf("\n ENTER B ELEMENTS  ");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}

void add(int A , int B)
{
	int add;
	add=A+B;
	printf("\n\n ADDITION IS %d",A+B);
}

void sub(int A , int B)
{
	int sub;
	sub=A-B;
	printf("\n\n SUBTRECTION IS %d",A-B);
}

void mul(int A , int B)
{
	int mul;
	mul =A*B;
	printf("\n\n MULTIPLICATION  IS %d",A*B);
	
}

void div(int A , int B)
{
	float div;
	div=A/(float)B;
	printf("\n\n DIVISION IS %.2f",div);
	
}