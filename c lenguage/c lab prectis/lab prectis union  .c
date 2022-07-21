#include <stdio.h>

union student {
	char name[20] ;
	int roll  ;
	float per;
}s1;

void main ()
{
	int size;
	printf("\n\n     student info     ");
	
	printf("\n\n Student name    : ");
	scanf("%s",&s1.name);
	printf("\nStudent name  : %s",s1.name);
	printf("\n\n----------------------------------\n");
	
	printf("\n\n Student roll no     : ");
	scanf("%d",&s1.roll);
	printf("\nStudent roll no   : %d",s1.roll);
	printf("\n\n----------------------------------\n");
	
	printf("\n Student percentage    : ");
	scanf("%f",&s1.per);
	printf("\nStudent name  : %.2f",s1.per);
	printf("\n\n----------------------------------\n");
	
	
	size=sizeof(s1);
	printf("\n structure size  : %d ",size);
	
}