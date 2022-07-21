#include<iostream>
using namespace std;
template <class D>
class num
{
	public :
		D  num1;
		num(D n1)
		{
			num1 = n1;
		}
		void show()
		{
			cout<<" A = "<<num1;
		}
};
int main ()
{
	num <int>n1(10);
	n1.show();
	num <float>n2(10.10);
	n2.show();
}