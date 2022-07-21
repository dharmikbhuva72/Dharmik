#include<iostream>
using namespace std;
class A
{
	public :
		int money = 0;
		friend B(A);
}; 

int B(A a1)
{
	a1.money += 50000;
	return a1.money;
}

int main()
{
	A a1;
    cout<<"money recived "<<B(a1)<<endl;
	return 0;
}