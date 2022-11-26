#include<stdio.h>
struct employee1{
	int empno;
	char empname[30];
	char address[30];
	float age;
}e1;
struct employee2{
	int empno;
	char empname[30];
	char address[30];
	float age;
}e2;
struct employee3{
	int empno;
	char empname[30];
	char address[30];
	float age;
}e3;
struct employee4{
	int empno;
	char empname[30];
	char address[30];
	float age;
}e4;
struct employee5{
	int empno;
	char empname[30];
	char address[30];
	float age;
}e5;


void main()
{
	printf("\n----------------------------------");
	printf("\n enter a employee 1 information  ");
	printf("\n----------------------------------");
	
	printf("\n enter a employee number           : ");
	scanf("%d",&e1.empno); 
	printf("\n enter a employee name             : ");
	scanf("%s",&e1.empname); 
	printf("\n enter a employee address          : ");
	scanf("%s",&e1.address);
	printf("\n enter a employee age              : ");
	scanf("%f",&e1.age);
    
   	printf("\n----------------------------------");
	printf("\n enter a employee 2 information  ");
	printf("\n----------------------------------");
	
	printf("\n enter a employee number           : ");
	scanf("%d",&e2.empno); 
	printf("\n enter a employee name             : ");
	scanf("%s",&e2.empname); 
	printf("\n enter a employee address          : ");
	scanf("%s",&e2.address);
	printf("\n enter a employee age              : ");
	scanf("%f",&e2.age);
    
   	printf("\n----------------------------------");
	printf("\n enter a employee 3 information  ");
	printf("\n----------------------------------");
	
	printf("\n enter a employee number           : ");
	scanf("%d",&e3.empno); 
	printf("\n\n enter a employee name           : ");
	scanf("%s",&e3.empname); 
	printf("\n enter a employee address          : ");
	scanf("%s",&e3.address);
	printf("\n enter a employee age              : ");
	scanf("%f",&e3.age);

   	printf("\n----------------------------------");
	printf("\n enter a employee 4 information  ");
	printf("\n----------------------------------");
	
	printf("\n enter a employee number           : ");
	scanf("%d",&e4.empno);  
	printf("\n\n enter a employee name           : ");
	scanf("%s",&e4.empname); 
	printf("\n enter a employee address          : ");
	scanf("%s",&e4.address);
	printf("\n enter a employee age              : ");
	scanf("%f",&e4.age);
    
   	printf("\n----------------------------------");
	printf("\n enter a employee 5 information  ");
	printf("\n----------------------------------");
	
	printf("\n enter a employee number           : ");
	scanf("%d",&e5.empno); 
	printf("\n\n enter a employee name           : ");
	scanf("%s",&e5.empname); 
	printf("\n enter a employee address          : ");
	scanf("%s",&e5.address);
	printf("\n enter a employee age              : ");
	scanf("%f",&e5.age);
    
    printf("\n----------------------------------");
	printf("\n employee information are  ");
	printf("\n----------------------------------");
	
	printf("\n employee number           : %d   ",e1.empno);
	printf("\n employee name             : %s   ",e1.empname);
	printf("\n employee address          : %s   ",e1.address);
	printf("\n employee age              : %.2f ",e1.age);
	printf("\n----------------------------------------------");
	
	printf("\n employee number           : %d   ",e2.empno);
	printf("\n employee name             : %s   ",e2.empname);
	printf("\n employee address          : %s   ",e2.address);
	printf("\n employee age              : %.2f ",e2.age);
	printf("\n----------------------------------------------");
    
   	printf("\n employee number           : %d   ",e3.empno);
	printf("\n employee name             : %s   ",e3.empname);
	printf("\n employee address          : %s   ",e3.address);
	printf("\n employee age              : %.2f ",e3.age);
	printf("\n----------------------------------------------");
    
   	printf("\n employee number           : %d   ",e4.empno);
	printf("\n employee name             : %s   ",e4.empname);
	printf("\n employee address          : %s   ",e4.address);
	printf("\n employee age              : %.2f ",e4.age);
	printf("\n----------------------------------------------");
    
   	printf("\n employee number           : %d   ",e5.empno);
	printf("\n employee name             : %s   ",e5.empname);
	printf("\n employee address          : %s   ",e5.address);
	printf("\n employee age              : %.2f ",e5.age);
	printf("\n----------------------------------------------");

}