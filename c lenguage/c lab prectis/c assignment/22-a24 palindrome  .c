#include<stdio.h>

int reverse(int n);

void main()
{
	int number , sum ;
	printf("enter the number  : ");
	scanf("%d",&number);
	sum = reverse(number);
	if(number == sum)
	{
		printf("\n the given number %d is a pelidrome",number);
	}
	else
	{
		printf("\n the  given number %d is a not pelidrome ",number);
	}
	
}

int reverse(int n)
{
	int rem;
	static int sum=0;
	if(n !=0)
	{
		rem=n%10;
		sum=sum*10 +rem;
		reverse(n/10);
	 } 
}