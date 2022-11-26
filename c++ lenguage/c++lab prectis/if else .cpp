#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<endl;
	cout<<"enter A  ";
	cin>>a;
	cout<<endl;
	cout<<"enter B  ";
	cin >>b;
	cout<<endl;
	cout<<"enter c  ";
	cin >>c;
	cout<<"\n A =  "<<a<<"\tb = "<<b<<"\tc = "<<c<<endl<<endl;
	
	if(a>b)
	{   
	    if(a>c)
	    {
	    	cout<<"A is greater"<<endl;
		}
		else
		{
			cout<<"C is greater"<<endl;
		}
		
	}
	else
	{
		if(b>c)
		{
			cout<<"B is greater"<<endl;
		}
		else
		{
			cout<<"C is greater"<<endl;
		}
	}
}