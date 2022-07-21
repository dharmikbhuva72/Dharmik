#include<stdio.h>

void main()
{
	int a,b,arr1[2][2],arr2[2][2],arr3[2][2];
	
	printf("\n----------------------\n");
	printf("enter array 1 elements  ");
	printf("\n----------------------\n");
	
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			printf("enter a array 1 elements  :[%d][%d] ",a,b);
			scanf("%d",&arr1[a][b]);
			
		}
	}
		for(a=0;a<2;a++)
	{
		printf("\n");
		for(b=0;b<2;b++)
		{
			printf("%d\t",arr1[a][b]);
		}
    }
    	
	printf("\n----------------------\n");
	printf("enter array 2 elements  ");
	printf("\n----------------------\n");
	
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			printf("enter a array 2 elements  :[%d][%d] ",a,b);
			scanf("%d",&arr2[a][b]);
			
		}
	}
		for(a=0;a<2;a++)
	{
		printf("\n");
		for(b=0;b<2;b++)
		{
			printf("%d\t",arr2[a][b]);
		}
    }

	printf("\n----------------------\n");
	printf(" multiplication of 2 array is   ");
	printf("\n----------------------\n");
		
	for(a=0;a<2;a++)
	{
		printf("\n");
		for(b=0;b<2;b++)
		{
			arr3[a][b]=arr1[a][b]*arr2[a][b];
			printf("%d\t",arr3[a][b]);
		}
    }
    
   	printf("\n----------------------\n");
	printf(" subtrection of 2 array is   ");
	printf("\n----------------------\n");
		
	for(a=0;a<2;a++)
	{
		printf("\n");
		for(b=0;b<2;b++)
		{
			arr3[a][b]=arr1[a][b]-arr2[a][b];
			printf("%d\t",arr3[a][b]);
		}
    }
    

}
