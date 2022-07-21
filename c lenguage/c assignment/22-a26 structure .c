#include<stdio.h>
struct employee{
	int empno;
	char empname[30];
	char address[30];
	float age;
}e1;
void main()
{
	printf("\n----------------------------------");
	printf("\n enter a student information  ");
	printf("\n----------------------------------");
	
	printf("\n enter a employee number         : ");
	scanf("%d",&e1.empno); 
	printf("\n\n enter a employee name           : ");
	scanf("%s",&e1.empname); 
	printf("\n enter a employee address          : ");
	scanf("%s",&e1.address);
	printf("\n enter a employee age              : ");
	scanf("%f",&e1.age);
	
	printf("\n----------------------------------");
	printf("\n student information are  ");
	printf("\n----------------------------------");
	
	printf("\n employee number           : %d   ",e1.empno);
	printf("\n employee name             : %s   ",e1.empname);
	printf("\n employee address          : %s   ",e1.address);
	printf("\n employee age              : %.2f ",e1.age);
}