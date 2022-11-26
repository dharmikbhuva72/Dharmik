

#include<stdio.h>
void main ()
{
	float marks [5];
	int i;
	
	printf("\nENTER THE ARRAY ELEMENNT : \n\n ");
	for (i=0; i<=5; i++)
	{
		printf("ENTER ARRAY [%d]= ",i);
		scanf("%f , &marks");
	}
	printf("\ARRAY ELEMENTS ARE :  \n\n");
	for( i=0; i<=5; i++)
	{
		printf("\n ARRAYY[%d = %f]",i,marks[i]);
		
	}
	
}