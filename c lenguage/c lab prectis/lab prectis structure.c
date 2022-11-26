#include <stdio.h>

struct employee
{
	int eid;
	char name[10];
	float sal;
	
}e1;

void main ()
{
	printf("\n-----------------------\n");
	printf("    enter your details     ");
	printf("\n-----------------------\n");
	printf("\n enter a id        : ");
	scanf("%d",&e1.eid);
	printf("\n enter your name   : ");
	scanf("%s",&e1.name);
	printf("\n enter a salary    : ");
	scanf("%f",&e1.sal);
	
	printf("\n-----------------------\n");
	printf("         display           ");
	printf("\n-----------------------\n");
	
	printf("\n\n eid = %d",e1.eid);
	printf("\n\n name = %s",e1.name);
	printf("\n\ sal = %.2f",e1.sal);
}