/*#include<stdio.h>

void main()
{
	int arr1[5] , arr2[5] ,  res[5];
	int i;
	
	printf("\n\n------ENTER ELEMENTS 1St ARRAY-------\n\n ");
	
	for (i=0; i < 5; i++)
	{
		printf("\n\n ENTER A [%d]  : ",i);
		scanf(" %d" , &arr1[i]);
		
	}
	printf("\n\n------ENTER ELEMENTS 2nd ARRAY--------\n\n");
	
	for (i=0;i < 5; i++)
	{
		printf("\n\n ENTER B [%d]  : ",i);
		scanf("%d" ,&arr2[i]);
	}
	printf("\n\n------ADDITION OF 2ARRAY---------------\n\n");
	
	for(i=0; i < 5;i++)
	{
		res [i] =arr1[i] +arr2[i];
		printf("\n\n result [%d] =%d",i ,res[i]);
	}
}*/



#include<stdio.h>

void main ()
{
	int arr1 [5] , arr2 [5] , res [5];
	int i ;
	printf("\n-------------------------");
	printf("\nENTER ELEMENTS 1st ARRAY   ");
	printf("\n-------------------------\n");
	
	for (i=0 ; i < 5 ; i++)
	{
		printf("\nENTER A [%d]    :",i);
		scanf("%d",&arr1[i]);
	}
	printf("\n-------------------------");
	printf("\nENTER ELEMENTS 2nd ARRAY   ");
	printf("\n-------------------------\n");
	
	
	for (i=0 ;i < 5 ; i++)
	{
		printf("\nENTER B [%d]    :",i);
		scanf("%d",&arr2[i]);
	}
	printf("\n-------------------------");
	printf("\n ADDITION OF 2 ARRAY       ");
	printf("\n-------------------------\n");
	 
	for(i=0 ; i < 5; i++)
	{
		res[i]= arr1[i]+arr2[i];
		printf("\n\n result [%d]=%d",i,res[i]);
	} 
}