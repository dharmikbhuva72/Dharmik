#include <stdio.h>

void main()
{
	int arr[2][3],a,b;
	
	for(a=0;a<2;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("2 array [%d][%d] =  ",a,b);
			scanf("%d",&arr[a][b]);
		}
	}
	printf("\n\n matrix elements are ");
		for(a=0;a<2;a++)
	{  printf("\n");
		for(b=0;b<3;b++)
		{
			printf("%d \t  ",arr[a][b]);
			
		}
	}

}