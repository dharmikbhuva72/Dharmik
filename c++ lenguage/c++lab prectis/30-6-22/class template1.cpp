#include<iostream>
using namespace std;
template <class S>
class num
{
	public :
		S num1;
		num(S n1)
		{
			num1 = n1;
		}
		void show()
		{
			cout<<"\n A = "<<num1;
		}
	
};
int main()
{
	num <int> A(102);
	A.show();
	num <float> B(10.287);
	B.show();
	return 0;
}