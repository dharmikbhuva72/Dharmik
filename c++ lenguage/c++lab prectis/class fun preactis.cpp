#include<iostream>
using namespace std;

class A
{
	int a;
	public :
	
	void aacept()
	{
		cout<<"enter A  : ";
		cin>>a;
	 } 
	 void show()
	 {
	 	cout<<endl;
	 	cout<<"A = "<<a;
	 }
};

int main()
{
	A a1;
	a1.aacept();
	a1.show();
	return 0;
}