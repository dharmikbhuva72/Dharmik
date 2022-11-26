#include<stdio.h>

void  main()
{
	int r,l,w,b,h,choice;
	float area;
	printf("\n---------choice menu---------");
	printf("\n\n1. for area of circle");
	printf("\n\n2. for area of rectangle");
	printf("\n\n3. for area of triangle");
	
	printf("\n\n please enter your choice ");
	scanf("%d",&choice);

	
	if (choice == 1 )
	{
		printf("\n enter redious of the circle");
		printf("\n redious   :");
		scanf("%d",&r);
		
		area = 3.14*r*r;
		
	}
	else if (choice == 2)
	{
		printf("\n length and width of the rectangle");
		printf("\n\n length   :");
		scanf("%d",&l);
        printf("\n\n width    :");
		scanf("%d",&w);		
		area = l*w;
		
	}
	else if (choice == 3)
	{
		printf("\n enter the bese and hight of the tringle");
		printf("\n\n bese    :");
		scanf("%d",&b);
		printf("\n\n hight   :");
		scanf("%d",&h);
		
		area = (b*h) / 2;
		
	}
	else
	{
		printf("\n invalide choice ");
	}
		printf("\n------- area is  : %.2f------",area);
}