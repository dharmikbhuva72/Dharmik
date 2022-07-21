#include<iostream>
using namespace std;

class Dharmik
{
	private :
		int money;
		friend  class Satyam;
	public  :
		Dharmik()
		{
			money = 10000;
		}
};

class Satyam
{
	private :
		int money1;
		public :
			Satyam()
			{
				money1 = 20000;
			}
			
			int gate()
			{
				Dharmik d1;
				return d1.money +money1;	
			}
};

int main()
{
	Satyam s1;
	cout<<"\n\n money recived "<<s1.gate()<<endl<<endl;
	return 0;
}