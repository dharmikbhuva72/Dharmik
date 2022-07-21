#include <stdio.h>

void main()
{
	int a,b,small,secondsmall ,i[5];
	for(a=0;a<5;a++)
	{
	    printf("ENTER A ELEMENTS  %d  = ",a);
	    scanf("%d",&i[a]);
    }
	for(a=0;a<5;a++)
	{
		if(i[1] < i[2])
		{
			small=i[1];
			secondsmall=i[2];
		}
		else
		{
			small=i[2];
			secondsmall=i[1];	
	    }    
	}
	for(b=0;b<5;b++)
	{
		if(small>i[a])
		{
			secondsmall = small;
			small=i[a];
		}
		else if (secondsmall > i[a])
		{
			secondsmall = i[a];
		}
	}
	printf("\n second small no is %d",secondsmall);
}