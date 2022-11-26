#include<stdio.h>

#include<string.h>
void reverse(char *str);
void main()
{
	char str[30];
	printf("enter a string  :  " );
	gets(str);
	printf("\n\nbefore reverse string  : %s",str);
	reverse(str);
	printf("\n\nafter revewrse string  : %s",str);  
} 

void reverse(char *str)
{
	int len,a,temp;
	
	len =strlen(str);
	for(a=0;a<len/2;a++)
	{
		temp=str[a];
		str[a]= str[len-a-1];
		str[len-a-1 ]=temp;
		
	}
}