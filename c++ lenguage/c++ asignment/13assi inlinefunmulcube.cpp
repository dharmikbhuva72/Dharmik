#include<iostream>
using namespace std;
class A
{
	public :
	 int a,b,mul,cub;
	
	inline void display()
	{
		cout<<endl;
		cout<<"enter A  : ";
		cin>>a;
		cout<<endl<<endl;
		cout<<"enter B  : ";
		cin>>b;
		cout<<endl<<endl;
		cout<<" A = "<<a<<"\tB = "<<b<<endl<<endl;
		cout<<"---------------------------------------"<<endl<<endl;
		cout<<"multiplication is  ="<<(a*b)<<endl<<endl;
		
		cout<<" cube A            = "<<(a*a*a)<<endl<<endl;
		cout<<" cube B            = "<<(b*b*b)<<endl<<endl;
	}
};
int main()
{
	A a1;
	a1.display();
	return 0;
}