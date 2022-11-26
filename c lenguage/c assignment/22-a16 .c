#include<stdio.h>

void main()
{
	char str1[50],str2[50],a,b;
	printf("\nenter a string 1 : ");
	scanf("%s",str1);
	printf("\nenter a string 2 : ");
	scanf("%s",str2);
	
	for(a=0;str1[a] !='\0';a++);
	
		for(b=0;str2[b] !='\0';b++,a++)
		{
			str1[a]=str2[b];
		}
	
	str1[a]='\0';
	printf("\n output  : %s",str1);
}