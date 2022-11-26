#include<iostream>
using namespace std;
class A
{
	private :
		int a,b;
		friend swap(A);
		public :
			A()
			{
			     a = 10;
			     b = 20;
		    }
};
int swap(A a1)
{
	int c;
	cout<<"before swaping  a = "<<a1.a<<"\t b = "<<a1.b;
	a1.a = a1.a+a1.b;
	a1.b = a1.a-a1.b;
	a1.a = a1.a-a1.b;
	cout<<"after  swaping  a = "<<a1.a<<"\t b = "<<a1.b;
	return 0;
}


int main()
{
	A a1;
	swap(a1);
	return 0;
}