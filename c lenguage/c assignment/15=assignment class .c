#include<stdio.h>

void main()
{
	int rno, total,sub1,sub2,sub3,sub4,sub5;
	char name[40];
	float per;
	
	printf("\n-------STUDENT INFO-------");
	printf("\n ENTER ROLL NO         :");
	scanf("%d",&rno);
	printf("\n ENTER YOUR NAME       :");
	scanf("%s",&name);
	printf("\n MATHS MARK            :");
	scanf("%d",&sub1); 
	printf("\n CHEMESTRY MARK        :");
	scanf("%d",&sub2);
	printf("\n SANSKRIT MARK         :");
	scanf("%d",&sub3);
	printf("\n BAYOLOGI MARK         :");
	scanf("%d",&sub4);
	printf("\n COMPUTER MARK         :");
	scanf("%d",&sub5);
	
	total= sub1+ sub2+ sub3+ sub4+ sub5;
	per  = (float)total/5;
	
	printf("-------STUDENT DETELS---------");
	printf("\n ROLL NO         : %d",rno);
	printf("\n STUDENT NAME    : %s",name);
	printf("\n TOTAL           : %d",total);
	printf("\n PERCENTAGE      : %.2f",per);
	
	if(per>=75)
	{
		printf("CLASS : DRISTICTION    :");
		
	}
	else if (per>=60)
	{
		printf("CLASS : FAST CLASS     :");
		
	}
	else if (per>=50)
	{
		printf("class : SECOND CLASS   :");
		
	}
	else if (per>=40)
	{
		printf("class : PASS CLASS     :");
		
	}
	else 
	{
		printf("CLASS : FAIL!!         :");
	}

}