#include<iostream>
using namespace std;
class Base
{
	public :
		int a=10,b=20;

		virtual void display1();
		virtual void display4();
		
	void display2()
	{
		
		cout<<"\naddition is  :   "<<(a+b);
		 
	}
};
class Derived : public Base 
{
	public :
		void display3()
		{
			
			cout<<"\nsubtrection is  : "<<(a-b);	
		}
		void display1()
		{
			cout<<"\nmultiplication  : "<<(a*b);
		}
		void display4()
		{
			cout<<"\ndivision        : "<<(a/(float)b);
		}
};
int main()
{
	Derived d1;
	d1.display1();
	d1.display2();
	d1.display3();
	d1.display4();
	return 0;
}