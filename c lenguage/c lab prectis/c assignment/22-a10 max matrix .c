#include<stdio.h>

void main()
{

	int a,b,matrix[3][3],max;
	
	printf("\n\n enter a matrix elements ");
	
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("\n\n enter matrix [%d][%d]    :  ",a,b);
			scanf("%d",&matrix[a][b]);
			
		}
	}
	
	printf("\n matrix elements are ");
	
	for(a=0;a<3;a++)
	{
		printf("\n");
		for(b=0;b<3;b++)
		{
			printf("%d\t",matrix[a][b]);
		}
	}
	max = matrix[0][0];
	for(a=0;a<3;a++)
	{
		
		for(b=0;b<3;b++)
		{
			if (matrix[0][0] < matrix[a][b])
			{
				max = matrix[a][b];
			}
		}
	}
	printf("\n\n the max number is  :   %d",max);
	
	
	
}