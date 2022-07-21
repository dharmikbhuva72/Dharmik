#include<iostream>
using namespace std;

template <typename  D>

D swap(D a,D b)
{
	int c;
	cout<<endl;
	cout<<"before swaping A = "<<a<<"\tB = "<<b;
	
	c = a ;
	a = b;
	b = c;
	cout<<endl;
	cout<<"after swaping A = "<<a<<"\tB = "<<b;
	return 0;
}
int main()
{
	swap(10,20);
	return 0;
}