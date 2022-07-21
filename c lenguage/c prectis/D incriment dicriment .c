#include<stdio.h>
void main()
{
	int a , b ;
	  
	printf("\n ENTER A  :");
	scanf("%d",&a);
	printf("\n ENTER B  :");
	scanf("%d",&b);
	
	a = b++;
	b = ++a;
	 
	printf("\n incriment velue A = %d  B = %d: ",a,b);
	
	a = b--;
	b = --a;
	
	printf("\n dicriment velue A = %d B = %d: ",a,b); 
	
	
	
	  
}