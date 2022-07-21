#include<stdio.h>

#include<string.h>

void reversestring(char *str1);

void main()
{
	char str[50];
	printf("\n enter the string  : ");
	gets(str);
	printf("brfore swaping string  : %s\n",str);
	reversestring(str);
	printf("after swaping string  : %s\n",str);
}
void reversestring(char *str1)
{
	char i ,len ,temp ;
	len = strlen(str1);
	for(i=1;i <len/2;i++)
	{
	    temp=str1[i];
	    str1[i]=str1[len-i-1];
	    str1[len-i-1]=temp;
    }
}