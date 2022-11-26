#include<iostream>
using namespace std;
int add(int a1,int b1)
{
return a1 + b1;
	
}
int main()
{
	int a,b;
	cout<<endl;
	cout<<"enter A  : ";
	cin>>a;
	cout<<endl;
    cout<<"enter B  : ";
	cin>>b;
	cout<<"\n A = "<<a<<"\t B = "<<b;
	cout<<endl;
	cout<<endl;
	cout<<"addition is  = ";
	cout<<add(a,b);
	
	return 0;
	
}