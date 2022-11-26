#include <stdio.h>
#include <string.h>
void main()
{
	char str [20] = "dharmik bhuva";
	int i ;
	
	printf("\n enter a string   "  );
	scanf("%s",&str);
	for(i=0;str[i] !='\n';i++);
	
	printf("\n string length is  %d",i);
	
	  
}