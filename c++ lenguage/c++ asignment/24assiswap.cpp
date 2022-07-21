#include<iostream>
using namespace std;
class A
{
	private :
		int a,b;
		friend B(A);
		public :
		A()
		{
			a = 10;
			b = 20; 
		}
		
};
int B(A a1)
{
	int c;
	cout<<"before swaping  a = "<<a1.a<<"\t b = "<<a1.b;
	c = a1.a;
	a1.a = a1.b;
	a1.b = c;
	cout<<endl<<endl;
	cout<<"after swaping   a = "<<a1.a<<"\t b = "<<a1.b;
	
	return 0;
}
int main()
{
	A a1;
	B(a1);
	return 0;
}
