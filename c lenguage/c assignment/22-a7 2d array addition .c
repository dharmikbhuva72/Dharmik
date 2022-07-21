#include <stdio.h>

void main()
{
	int a,b,arr1[3][3],arr2[3][3],arr3[3][3];
	printf("\n--------------------------------\n");
	printf("   enter  array 1 elements          ");
	printf("\n--------------------------------\n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
		    printf("\n enter a array 1 elements  [%d][%d]:  ",a,b);
	        scanf("%d",&arr1[a][b]);
        }
    }
	for(a=0;a<3;a++)
	{
		printf("\n");
		for(b=0;b<3;b++)
		{
			printf("%d\t",arr1[a][b]);
			
		}
	}
	printf("\n--------------------------------\n");
	printf("   enter  array 2 elements          ");
	printf("\n--------------------------------\n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
		    printf("\n enter a array 2 elements  [%d][%d]:  ",a,b);
	        scanf("%d",&arr2[a][b]);
        }
    }
	for(a=0;a<3;a++)
	{
		
		printf("\n ");
		for(b=0;b<3;b++)
		{
			printf("%d\t",arr2[a][b]);
			
		}
	}
	printf("\n--------------------------------\n");
	printf("  addition of   array 1 and 2          ");
	printf("\n--------------------------------\n");
	for(a=0;a<3;a++)
	{
		printf("\n");
		for(b=0;b<3;b++)
		{
			arr3[a][b]=arr1[a][b]+arr2[a][b];
			printf("%d\t",arr3[a][b]);
			
		}
	}
}