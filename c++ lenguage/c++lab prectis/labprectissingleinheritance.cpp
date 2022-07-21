#include<iostream>
using namespace std;
class base
{
	public :
		int a;
		
	void acceptA ()
	{
		
		cout<<"enter A  : ";
		cin>>a;
	}
	void showA()
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
			cout<<"enter B  : ";
			cin>>b;
		}
		void showB()
		{
			cout<<" B = "<<b;
		}
	
};
int main ()
{
	derived a1;
	
	a1.acceptA();
	a1.acceptB();
	a1.showA();
	a1.showB();
	
	return 0;
	
}