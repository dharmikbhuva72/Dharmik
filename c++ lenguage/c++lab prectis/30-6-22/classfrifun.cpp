#include<iostream>
using namespace std;
class satyam
{
	public :
		int num1;
		satyam()
		{
			num1 = 20000;
		}
		
};
class dharmik
{
	public :
		int num2;
		dharmik()
		{
			num2 = 30000; 
		}
		int add()
		{
			satyam s1;
			return s1.num1 + num2;
		}
};
int main()
{
	dharmik d1;
	cout<<"add = "<<d1.add();
	return 0;
}