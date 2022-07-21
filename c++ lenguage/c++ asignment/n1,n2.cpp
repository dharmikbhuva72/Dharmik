#include<iostream>
using namespace std;

int main()
{
	int n1,n2,sum;
	float avg;
	
	cout<<"enter N1 : ";
	cin>>n1;
	cout<<"enter N2 : ";
	cin>>n2;
	sum = n1+n2;
	cout<<"sum is "<<sum<<endl;
	avg = sum/(float)2; 
	cout<<"avg is "<<avg;
	return 0;
}