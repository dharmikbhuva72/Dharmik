#include<iostream>
using namespace std;
class A 
{
	double a,b,add,sub,mul;
	float div;
	public :
		void accept()
		{
			cout<<endl;
			cout<<"enter A ";
			cin>>a;
			cout<<endl;
			cout<<"enter B ";
			cin>>b;
			cout<<endl;
			cout<<" A = "<<a<<" B = "<<b<<endl<<endl;
			cout<<"------------------------------"<<endl;
		}
		void addition()
		{
			cout<<endl;
			add = a+b;
			cout<<"addittion is "<<add<<endl<<endl;
			sub = a-b;
			cout<<"subtrection is "<<sub<<endl<<endl;
			mul=a*b;
			cout<<"multiolication is "<<mul<<endl<<endl;
			div = a/(float)b;
			cout<<"division is "<<div<<endl<<endl;
		}
	
};

int main ()
{
	A a1;
	a1.accept();
	a1.addition();
	return 0;
}