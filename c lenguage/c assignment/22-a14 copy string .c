#include <stdio.h>

void main()
{
	char b1[50],b2[50];
	int a ;
	
	printf("\n enter the string 1 :  ");
	fgets(b1,sizeof(b1),stdin);
	
	for(a=0;b1[a] != '\0';a++)
	{
		b2[a]=b1[a];
		
	}
	b2[a]='\0';
	printf("\n string 2 : %s",b2);

}