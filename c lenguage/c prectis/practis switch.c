#include<stdio.h>

void main()
{
	int a, b, choice;
	float div;
	printf("\n----Choice Calculator------\n\n");
	printf("Enter A:  ");
	scanf("%d",&a);
	printf("Enter B:  ");
	scanf("%d",&b);
	printf("A = %d, B = %d", a, b); 
	printf("\n\n---Calc Menu----\n");
	printf("\n1.Addition \n2.Subtraction \n3.Division \n4.Multiplication");
	printf("\n\nPlease Enter your choice ? \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\n ADDITION IS %d ",a+b);
		       break;
		    
		case 2: printf("\n SUBTRECTION IS %d ",a-b);
		       break;
		       
		case 3: printf("\n DIVISION IS  %.2f",a/b);
		       break;
		       
	    case 4: printf("\n MULTIFICATION is %d",a*b);
	           break;
	           
     default : printf("\n INVALIDE CHOICE ");
               break;
               
	}
}
