#include<iostream>
using namespace std;
template <class s>
class num
{
	public :
	s num1;
	num(s n1)
	{
		num1 = n1;
	}
	void display()
	{
		cout<<"\n A = "<<num1;
	}
};
int main()
{
	num <int> n1(10);
	n1.display();
	num <float> n2(10.72);
	n2.display();
	return 0;
}