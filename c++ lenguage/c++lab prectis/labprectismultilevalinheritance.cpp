#include<iostream>
using namespace std;

class base
{
	public :
		int a;
		void acceptA()
		{
			cout<<"\n enter A : ";
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
			cout<<"\n enter B : ";
			cin>>b;
		}
		showB()
		{
			cout<<"\t B = "<<b;
		}
};
class derivedA : public derived
{
	public :
		int c;
		void acceptC()
		{
			cout<<"  \nenter C  : ";
			cin>>c;
			cout<<endl<<endl;
		}
		showC()
		{
			cout<<"\t C = "<<c;
		}
};

int main ()
{
	derivedA a1;
	a1.acceptA();
	a1.acceptB();
	a1.acceptC();
	a1.showA();
	a1.showB();
	a1.showC();

	return 0;
}