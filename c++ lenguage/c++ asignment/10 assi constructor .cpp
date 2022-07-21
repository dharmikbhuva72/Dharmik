#include<iostream>
using namespace std;
class addition
{
	public:
	double a,b,add,sub,mul;
	float div;
	addition()
	{
	    cout<<endl; 
    	cout<<"enter A ";	
    	cin>>a;
    	cout<<endl<<endl;
    	cout<<"enter B ";
    	cin>>b;
    	cout<<endl;
    	cout<<" A = "<<a<<"\tb = "<<b<<endl;
    	cout<<"---------------------------";
    	cout<<endl<<endl;
    	add = a+b;
     	cout<<"addition is "<<add<<endl;
     	
     	cout<<endl;
     	sub = a-b;
     	cout<<"subtrection is "<<sub<<endl;
    	
    	cout<<endl;
    	mul = a*b;
    	cout<<"multiplication is "<<mul<<endl;
    	
    	cout<<endl;
    	div = a/(float)b;
    	cout<<"division is "<<div<<endl;
    	
	}
	
};
int main()
{  
    addition A1;
	
	return 0;
}