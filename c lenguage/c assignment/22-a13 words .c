#include<stdio.h>
#include<string.h>

void main()
{
	char arr[50]; 
	int a,words=0;
	
	printf("\n enter the string " );
	gets(arr);
	
	for (a=0;arr[a];a++)
	{
		if(arr[a] == 32)
		words++;
	}
	if(a>0)
	
	words++;
	
	printf("\n no of words in string   %d ",words);

}