#include<stdio.h>

void main()
{
	float P,R,T,Sl;
	
	printf("\n ENTER PRINCIPAL (AMOUNT) :  ");
	scanf("%f",&P);
	printf("\n ENTER TIME               :  ");
	scanf("%f",&T);
	printf("\n ENTER RATE               :  ");
	scanf("%f",&R);
	
	Sl = (P*R*T)/100;
	
	printf("\n\n SIMPAL INTEREST IS   : %f",Sl);
	
	
}