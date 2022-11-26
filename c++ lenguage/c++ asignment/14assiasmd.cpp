#include<iostream>
using namespace std;

class A 
{
	public :
		int show1(int a,int b)
		{
			return a+b;
			
		}
		int show2(double a,double b)
		{
			return a-b;
		}
		int show3(long double a,long double b )
		{
			return a*b;
		}
		int show4(float a ,float b)
		{
			return a/(float)b;
		}
	
};
int main()
{
	A a1;
	cout<<endl<<endl;
	cout<<"addition is        : "<<a1.show1(10,20)<<endl<<endl;
	cout<<"subtreaction is    : "<<a1.show2(10,20)<<endl<<endl;
	cout<<"multiplication is  : "<<a1.show3(10,20)<<endl<<endl;
	cout<<"division is        : "<<a1.show4(10,20)<<endl<<endl;
	return 0;
}
