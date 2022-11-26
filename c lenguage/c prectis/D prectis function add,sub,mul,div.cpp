#include<stdio.h>
void addition();
void subtrection();
void multiplication();
void division();

int main()
{
	int choice;
	
	printf("\n----------choice manu---------\n");
	
	printf("\n\n1.addition \n\n2.subtrection \n\n3. multiplication \n\n4. division \n");
	printf("\nplease enter your choice \t");
	scanf("%d",&choice);
	
	
	switch (choice)
	{
		case 1 :addition();
		        break;
		case 2 :subtrection();
		       break;
	    case 3 :multiplication();
		       break;
	    case 4 :division();
		        break;        
		default :printf("\ninvalide choice");
		        break;
	}
	
}

void addition()
{
	int a,b,add;
	
	printf("\n ENTER  A   :");
	scanf("%d",&a);
	printf("\n ENTER  B   :");
	scanf("%d",&b);
	
	add= a+b;
	printf("\n\n ADDITION IS   :  %d ",add);
}

void subtrection()
{
	int a,b,sub;
	
	
	printf("\n ENTER  A   :");
	scanf("%d",&a);
	printf("\n ENTER  B   :");
	scanf("%d",&b);
	
	
	sub = a-b;
	printf("\n\n SUBTRECTION IS : %d",sub);
	
}

void multiplication()
{
	int a,b,mul;
	
	
	printf("\n ENTER  A   :");
	scanf("%d",&a);
	printf("\n ENTER  B   :");
	scanf("%d",&b);
	
	mul = a*b;
	printf("\n\n MULTIPLICATION IS  : %d",mul);
	
}

void division()
{
	int a,b;
	float div;
	
	printf("\n ENTER  A   :");
	scanf("%d",&a);
	printf("\n ENTER  B   :");
	scanf("%d",&b);
	
	div = a/(float)b;
	printf("\n\n DIVISION IS  : %.2f",div); 
}