#include<iostream>
using namespace std;
class satyam
{
	private :
		int money = 0;
	friend int dharmik(satyam);	
}; 
int dharmik(satyam s1)
{
	s1.money += 10000;
	return s1.money;
}
int main()
{
	satyam s1;
	cout<<endl;
	cout<<"money received : "<<dharmik(s1);
	return 0;
}