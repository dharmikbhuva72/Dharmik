#include<iostream>
using namespace std;
template <class D>
class num1
{
	public :
		D num2;
		num1(D n1)
		{
			num2 = n1;
		}
		void show()
		{
			cout<<"\n A = "<<num2;
		}
};
int main()
{
	num1 <int> A(10);
	A.show();
	num1 <float> B(10.10);
	B.show();
	return 0;
}