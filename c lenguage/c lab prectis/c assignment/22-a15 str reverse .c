#include <stdio.h>

void main ()
{
	char str [50];
	int a,length=0,flag=1;
	
	printf("eenter the string : " );
	gets(str);
	
	
	for (a=0;str[a] != '\0';a++)
	{
		length++;
	}
	for(a=0;a<length/2;a++)
	{
		if((str[a]) != str[length-1-a])
		{
			flag=0;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\n palindrome ");
		
	}
	else
	{
		printf("\n not palindrome ");
	}
}