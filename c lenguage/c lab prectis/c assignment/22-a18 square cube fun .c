#include <stdio.h>

void main()
{
	int a;
	printf("\n ENTER A ELEMENTS  ");
	scanf("%d",&a);
	square(a);
	cube(a);
	
}
void square (int A)
{
	int square;
	square = A*A;
	printf("\n\n SQUARE IS %d",square);
	
}
void cube (int A)
{
	int cube;
	cube = A*A*A;
	printf("\n\n CUBE IS %d",cube);
}