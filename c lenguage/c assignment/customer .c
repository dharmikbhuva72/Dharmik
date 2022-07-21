#include<stdio.h>

void main()
{
	char name[20];
    char gender[20],male[20];
    float age;
    double purchaseamount;
    int discount,disamount,netamount;
    
    printf("\n enter your name          :");
    gets(name);
    printf("\n enter a customer gender  :");
    scanf("%s",&gender);
    printf("\n enter a customer age     : ");
    scanf("%f",&age);
    printf("\n customer purchase amount :");
    scanf("%lf",&purchaseamount);
    
    if(purchaseamount > 100000)
    {
    	if(age>65)
    	{
    		if(gender == male)
    		{
    			disamount = purchaseamount/10;
    			printf("\n discont = %d",disamount);
			}
			else
			{   disamount = purchaseamount/20;
				printf("\n discont = %d",disamount);
			}
		}
		if(age<65)
		{
			if(gender == male)
			{                   
				disamount = purchaseamount/5;
				printf("\n discount = %d",disamount);
			}
			else
			{
				disamount = purchaseamount/10;
				printf("\n discount = %d",disamount);
			}
		}
	}
	
	
	printf("\n\n-------customer detelis--------");
	
	printf("\n customer name                : %s",name);
	printf("\n customer age                 : %.2f",age);
	printf("\n customer gender              : %s",gender);
	printf("\n customer discount            : %d",disamount);
	printf("\n customer purchase amount     : %.2lf",purchaseamount);	
	netamount = purchaseamount - disamount;
	printf("\n customer net amount :%d ",netamount);
}