#include<iostream>
using namespace std;
template <class D>
class num
{
	public :
		D num1;
		num(D n1)
		{
			num1 = n1;
		}
		
		void show()
		{
			cout<<"\nA = "<<num1;
			
		}
	
};

int main()
{
	num <int>intnum(10);
	intnum.show();
	num <float>floatnum(10.54f);
	floatnum.show();
	return 0;
	
}