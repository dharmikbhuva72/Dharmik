#include<iostream>
using namespace std;
class satyam
{
	private :
		int money = 0;
	friend dharmik(satyam);	
};
int dharmik(satyam s1)
{
	s1.money += 10000;
	return s1.money;
	
}
int main()
{
	satyam s;
	cout<<"money recived"<<dharmik(s);
	
	return 0;
}