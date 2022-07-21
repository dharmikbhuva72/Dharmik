#include <stdio.h>

void main ()
{
	int i,j,arr1[3][3],arr2[3][3],arr3[3][3];
	printf("\n enter a elements  \n\n");
	for (i=0;i<3 ;i++)
	{
	    for(j=0;j<3;j++)
     	{
     		scanf("%d",&arr1[i][j]);
	           	
	    }
	}
	printf("\n array elements are  : ");
	
	for (i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
     	{
     		printf("\t %d",arr1[i][j]);
	           	
	    }
	}
		printf("\n enter a elements  \n\n");
	for (i=0;i<3 ;i++)
	{
	    for(j=0;j<3;j++)
     	{
     		scanf("%d",&arr2[i][j]);
	           	
	    }
	}
	printf("\n array elements are  : ");
	
	for (i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
     	{
     		printf("\t %d",arr2[i][j]);
	           	
	    }
	}
	
	printf("\n\n 2 array addition is   \n\n");
	
	for (i=0;i<3 ;i++)
	{
	    for(j=0;j<3;j++)
     	{
     		arr3[i][j]=arr1[i][j] + arr2[i][j];
     		printf("%d\t",arr3[i][j]);
	           	
	    }
	}
		
	
}