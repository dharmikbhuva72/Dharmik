#include<stdio.h>

void main()
{
	int a,b,choice;
	float per;
	
	printf("\n ENTER NO A   : ");
	scanf("%d",&a);
	printf("\n ENTER NO B   : ");
	scanf("%d",&b);
	printf("\n A=%d ,B=%d ",a,b);
	
	printf("\n\n1.addition \n\n2.subtrection \n\n3. multiplication \n\n4. divison");
	printf("\n\nPLEASE ENTER YOUR CHOICE  :  ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1 :printf("\n addition = %d",a+b);
		        break;
		case 2 :printf("\n subtrection = %d",a-b);
		        break;
		case 3 :printf("\n multiplication = %d",a*b);
		        break;
		case 4 :printf("\n division  = %.2f",a/(float)b);
		        break;
	   default :printf("\n INVALIDE CHOICE ");
	    
	}
}