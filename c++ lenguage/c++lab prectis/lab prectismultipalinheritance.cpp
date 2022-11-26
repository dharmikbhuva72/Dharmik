#include<iostream>
using namespace std;

class base
{
	public :
		int a;
		void acceptA()
		{
			cout<<"enter A : ";
			cin>>a;
		}
		showA()
		{
			cout<<" A = "<<a;
		 } 
};
class derived : public base 
{
	public :
		int b;
		void acceptB()
		{
			cout<<" enter B : ";
			cin>>b;
		}
		showB()
		{
			cout<<" B = ";
		}
};
class derivedA : public derived
{
	public :
		int c;
		void acceptC()
		{
			cout<<"enter C : ";
			cin>>c;
		}
		showC()
		{
			cout<<" C = "<<c;
		}
};

int main()
{
	derivedA a1;
	a1.
	
	
	
	return 0;
}