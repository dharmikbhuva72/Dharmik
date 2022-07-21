#include<stdio.h>

void main ()
{
	int rno,total,sub1,sub2,sub3;
	char name [50];
	float per;
	printf("\n--------- STUDENT INFO --------\n");
	printf("\n ENTER ROLL NO   : ");
	scanf("%d",&rno);
	printf("\n ENTER YOUR NAME : ");
	scanf("%s",&name);
	printf("\n maths mark      : ");
	scanf("%d",&sub1);
	printf("\n BAYOLOGI MARK   : ");
	scanf("%d",&sub2);
	printf("\n CAMESTERY MARK  : ");
	scanf("%d",&sub3);
	total = sub1 + sub2 + sub3;
	per = (float)total/3;
	
	
	
	printf("\n --------STUDENT DETALSE -------");
	printf("\n\n ROLL NO           : %d   ",rno);
	printf("\n\n STUDENT NAME      : %s   ",name);
	printf("\n\n TOTAL MARKS       : %d   ",total);
	printf("\n\n PERSCNTAGE        : %.2f \t",per);
	
	
	if (per >= 75)
	{
		printf("\n CLASS DRISTICTION  :");
		
    }
	else if (per >= 65)	
	{
        printf("\n CLASS FAST CLASS   :");
				
	}
	else if (per >= 50)
	{
		printf("\n CLASS SECOND CLASS :");
		
	}
	else if (per >= 40)
	{
		printf("\n CLASS PASS CLASS   :");
		
	}
	else 
	{
		printf("\n fail               :");
		
	}
}