#include <stdio.h>
union student{


	char sname[10];
	int rollno;
	float per;
}s1;

void main()
{
	int size;
	printf("\n-------------enter student details----------\n");
	printf("\n\n enter name  : ");
	scanf("%s",&s1.sname);
	printf("name  : %s\n",s1.sname);
	
	printf("\n\n enter roll no  : ");
	scanf("%d",&s1.rollno);
	printf("roall no  : %d\n",s1.rollno);
	
	printf("\n\n enter per  : ");
	scanf("%.2f",&s1.per);
	printf("percentage  : %.2f\n",s1.per);
	
	size = sizeof(s1);
	printf("\n\n union size is %d bytes",size);

	
}