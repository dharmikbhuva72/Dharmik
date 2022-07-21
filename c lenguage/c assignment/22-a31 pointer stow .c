#include<stdio.h>

void main()
{
	char aa[20], bb[20],*a,*b;
	printf("\n ENTER A FRIST STRINGT   : ");
	gets(aa);
	printf("\n ENTER B SECOND STRINGT  : ");
	gets(bb);
	
	a = aa;
	b = bb;
	 
	while (*a)
	{
		a++;
    }
	while (*b)
	{
		*a = *b;
		b++;
		a++;
	}
	
	*a = '\0';
	printf("\n\n the string after is  : %s",aa);
}