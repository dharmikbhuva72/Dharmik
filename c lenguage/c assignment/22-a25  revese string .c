#include<stdio.h>
void reversesentance();
void main()
{
	printf("enter a sentance : ");
	reversesentance();
}
void reversesentance()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reversesentance();
		printf("%c",c);
	}
}