#include<iostream>
using namespace std;
class C
{
	int a,b,add,sub,mul,div;
	public:
	void accept ()
	{
		cout <<endl;
		cout<<"enter A  : ";
		cin>>a;
		cout <<endl;
	    cout<<"enter    : ";
		cin>>b;
		cout <<endl;
		cout<<" A  = "<<a<<" B = "<<b<<endl;
		cout <<endl;
		
	}
	void addition ()
	{
		cout <<endl;
		add = a+b;
		cout<<"aadition is    : "<<add;
		cout <<endl<<endl;
		sub = a-b; 
		cout<<"subtreaction   : "<<sub;
		cout <<endl<<endl;
		mul = a*b; 
		cout<<"multiplication : "<<mul;
		cout <<endl<<endl;
		div= a/b; 
		cout<<"division       : "<<div;
		
	}
};

int main()
{
	C a1;
	a1.accept();
	a1.addition();

	return 0;
}