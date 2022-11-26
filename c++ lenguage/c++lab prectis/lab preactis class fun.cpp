#include<iostream>
using namespace std;
class A
{
	public :
	int a;
	void accept()
	{
		cout<<"enter A : ";
		cin>>a;
	}
	void show()
	{
		cout<<endl;
		cout<<" A = "<<a;
	}
	
	public :
	int b;
	void accept1()
	{
		cout<<endl<<endl;
		cout<<"enter B : ";
		cin>>b;
	}
	void show1()
	{
		cout<<endl;
		cout<<" B = "<<b;
	}
};

int main()
{
	A e1,e2;
	e1.accept();
	e1.show();
	e2.accept1();
	e2.show1();
	return 0;
}