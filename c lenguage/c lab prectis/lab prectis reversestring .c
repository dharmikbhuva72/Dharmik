#include <stdio.h>
#include<string.h>
void reversingstring(char *str1);
void main ()
{
	char str[50];
	printf("enter the string  : " );
	gets(str);
	
	printf("brfore reversing string  : %s\n ",str);
    reversingstring(str);
	printf("after reversing string  : %s\n ",str);
}
void reversingstring(char *str1)
{
	int i ,len ,temp;
	len =strlen(str1);
	
	for(i=0;i <len/2;i++)
	{
		temp = str1[i];
		str1[i]=str1[len-i-1];
		str1[len-i-1]=temp;
	}
	
}