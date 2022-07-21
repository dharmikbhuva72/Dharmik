#include<stdio.h>

void main()
{
	int sub1,sub2,sub3, sub4 ,sub5,total;
	float per;
	
	printf("\n---------student info-------\n\n");
	printf("\n PHYSICS MARK     :");
	scanf("%d",&sub1);
    printf("\n CHEMISTRY MARK   :");
	scanf("%d",&sub2);
	printf("\n MATHS MARK       :");
	scanf("%d",&sub3);	
	printf("\n BAYOLOGI MSRK    :");
	scanf("%d",&sub4);
	printf("\n SANSKRIT MARK    :");
	scanf("%d",&sub5);
	total= sub1 + sub2 + sub3 + sub4 + sub5;
	per=(float)total/ 5 ;
	
	printf("\n---------percentage---------\n\n");
	printf("\n percentage is %f",per);
	
	
}