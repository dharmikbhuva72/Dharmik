#include<stdio.h>
struct student1{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s1;
struct student2{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s2;
struct student3{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s3;
struct student4{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s4;
struct student5{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s5;

void main()
{
   	printf("\n----------------------------------");
	printf("\n enter a employee 1 information  ");
	printf("\n----------------------------------");
    
    printf("\n enter a student roll no  : ");
    scanf("%d",&s2.rollno);
    printf("\n enter a maths mark       : ");
    scanf("%d",&s2.sub1);
    printf("\n enter a science          : ");
    scanf("%d",&s2.sub2);
    printf("\n enter a english          : ");
    scanf("%d",&s2.sub3);
    
   	printf("\n----------------------------------");
	printf("\n enter a employee 2 information  ");
	printf("\n----------------------------------");
    
    printf("\n enter a student roll no  : ");
    scanf("%d",&s3.rollno);
    printf("\n enter a maths mark       : ");
    scanf("%d",&s3.sub1);
    printf("\n enter a science          : ");
    scanf("%d",&s3.sub2);
    printf("\n enter a english          : ");
    scanf("%d",&s3.sub3);
    
   	printf("\n----------------------------------");
	printf("\n enter a employee 3 information  ");
	printf("\n----------------------------------");
    
    printf("\n enter a student roll no  : ");
    scanf("%d",&s4.rollno);
    printf("\n enter a maths mark       : ");
    scanf("%d",&s4.sub1);
    printf("\n enter a science          : ");
    scanf("%d",&s4.sub2);
    printf("\n enter a english          : ");
    scanf("%d",&s4.sub3);
    
   	printf("\n----------------------------------");
	printf("\n enter a employee 4 information  ");
	printf("\n----------------------------------");
    
    printf("\n enter a student roll no  : ");
    scanf("%d",&s1.rollno);
    printf("\n enter a maths mark       : ");
    scanf("%d",&s1.sub1);
    printf("\n enter a science          : ");
    scanf("%d",&s1.sub2);
    printf("\n enter a english          : ");
    scanf("%d",&s1.sub3);

    printf("\n----------------------------------");
	printf("\n enter a employee 5 information  ");
	printf("\n----------------------------------");

    printf("\n enter a student roll no  : ");
    scanf("%d",&s5.rollno);
    printf("\n enter a maths mark       : ");
    scanf("%d",&s5.sub1);
    printf("\n enter a science          : ");
    scanf("%d",&s5.sub2);
    printf("\n enter a english          : ");
    scanf("%d",&s5.sub3);
    
    printf("\n----------------------------------");
	printf("\n  employee  information are       ");
	printf("\n----------------------------------");
    
    printf("------------ student 1 --------------");
    printf("\n student roll no   : %d",s1.rollno);
    printf("\n maths mark        : %d",s1.sub1);
    printf("\n science mark      : %d",s1.sub2);
    printf("\n english mark      : %d",s1.sub3);
    
    s1.total=s1.sub1+s1.sub2+s1.sub3;
    printf("\n total mark is  : %d",s1.total);
    
    s1.per=s1.total/(float)3;
    printf("\n persentage is  : %.2f",s1.per);
    
    printf("\n----------------------------------\n");
    
    printf("------------ student 2 --------------");
    printf("\n student roll no   : %d",s2.rollno);
    printf("\n maths mark        : %d",s2.sub1);
    printf("\n science mark      : %d",s2.sub2);
    printf("\n english mark      : %d",s2.sub3);
    
    s2.total=s2.sub1+s2.sub2+s2.sub3;
    printf("\n total mark is  : %d",s2.total);
    
    s2.per=s2.total/(float)3;
    printf("\n persentage is  : %.2f",s2.per);
    
    printf("\n----------------------------------\n");
    
        printf("------------ student 3 --------------");
    printf("\n student roll no   : %d",s3.rollno);
    printf("\n maths mark        : %d",s3.sub1);
    printf("\n science mark      : %d",s3.sub2);
    printf("\n english mark      : %d",s3.sub3);
    
    s3.total=s3.sub1+s3.sub2+s3.sub3;
    printf("\n total mark is  : %d",s3.total);
    
    s3.per=s3.total/(float)3;
    printf("\n persentage is  : %.2f",s3.per);
    
    printf("\n----------------------------------\n");
    
        printf("------------ student  --------------");
    printf("\n student roll no   : %d",s4.rollno);
    printf("\n maths mark        : %d",s4.sub1);
    printf("\n science mark      : %d",s4.sub2);
    printf("\n english mark      : %d",s4.sub3);
    
    s4.total=s4.sub1+s4.sub2+s4.sub3;
    printf("\n total mark is  : %d",s4.total);
    
    s4.per=s4.total/(float)3;
    printf("\n persentage is  : %.2f",s4.per);
    
    printf("\n----------------------------------\n");
    
        printf("------------ student 5--------------");
    printf("\n student roll no   : %d",s5.rollno);
    printf("\n maths mark        : %d",s5.sub1);
    printf("\n science mark      : %d",s5.sub2);
    printf("\n english mark      : %d",s5.sub3);
    
    s5.total=s5.sub1+s5.sub2+s5.sub3;
    printf("\n total mark is  : %d",s5.total);
    
    s5.per=s5.total/(float)3;
    printf("\n persentage is  : %.2f",s5.per);
    
    printf("\n----------------------------------\n");
}