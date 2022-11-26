#include<iostream>
using namespace std;

class A
{
	private  :
		int money = 0;
		friend class B;
		public :
		A()
		{
			money = 20000;
		}
};
class B
{
	private :
		int money1 = 0;
		public :
		B()
		{
			money1 = 30000;
		}
		int gate()
		{
			A a1;
			return a1.money +money1;
		}
};
int main()
{
	B b1;
	cout<<endl;
	cout<<"money recived "<<b1.gate()<<endl<<endl;
	return 0;
}