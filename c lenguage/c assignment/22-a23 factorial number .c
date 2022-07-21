#include<stdio.h>
int factorial(int num);
void main()
{
	int number ;
	int fact;
	printf("enter a number  : ");
	scanf("%d",&number);
   fact=factorial(number);
    printf("factorial of %d is %d\n",number,fact);
}
int factorial(int num)
{
	if (num ==0)
	return 1;
	else
	return(num*factorial(num-1));
}