#include <stdio.h>

struct student{
	char name[10];
	int roll;
	float per;
}s1;
struct employee{
	int eid;
	char name [10];
	float sal;
}e1;
void main ()
{
	int choice,size;
	
	printf("\n(1) Student Detail\n\n(2) employee Detail");
	
	printf("\n\nPlease Enter Your Choice  :  ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :printf("\nEnter Name        :  ");
		        scanf("%s",&s1.name);
		        printf("\nEnter Roll No     :  ");
		        scanf("%d",&s1.roll);
		        printf("\nEnter Percentage  :  ");
		        scanf("%f",&s1.per);
		        
		        printf("\nStudent Name       : %s",s1.name);
		        printf("\nStudent Roll No    : %d",s1.roll);
		        printf("\nStudent Percentage : %.2f",s1.per);
		        
		        size=sizeof(s1);
		        printf("\nStructuer Size is %d bytes",size);
		        break;
		        
		case 2 :printf("\n Enter  id     :  ");
		        scanf("%d",&e1.eid);
		        printf("\n Enter Name    :  ");
		        scanf("%s",e1.name);
		        printf("\n enter salery   :  ");
		        scanf("%f",&e1.sal);
		        
		        
		        printf("\n Enter id         : %d ",e1.eid);
		        printf("\n Enter Nmae       : %s ",e1.name);
		        printf("\n Enter salary     : %f ",e1.sal);
		         
				
				size = sizeof(e1);
				printf("\n Structure size is %d bytes ",size);
				break;
				
		default : printf("\n invalide choice  ");
	}
	
	
}