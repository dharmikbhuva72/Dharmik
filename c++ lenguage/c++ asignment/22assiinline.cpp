#include<iostream>
using namespace std;
class A
{
	public :
		int a,b,mul,cubea,cubeb;
    
    inline void accept()
    {
    	cout<<"Enter A : ";
    	cin>>a;
    	cout<<endl;
    	cout<<"Enter B : ";
    	cin>>b;
    	cout<<endl<<endl;
    	cout<<"========================="<<endl<<endl;
    	
    	mul = a*b;
    	cout<<"multiplication is : "<<mul<<endl<<endl;
    	cout<<"cube A = "<<a*a*a<<endl<<endl;
    	cout<<"cube B = "<<b*b*b<<endl<<endl;
    	
    	
	}
};
int main()
{
	A a1;
	a1.accept();
	return 0;
}