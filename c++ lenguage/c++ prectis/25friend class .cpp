#include<iostream>
using namespace std;
class dharmik
{
	private :
		int money ;
		friend class satyam;
		public :
		    dharmik()
			{
				money = 10000;
			}
};
class satyam
{
	private :
		int money1;
		public :
			
			satyam()
			{
				money1 = 40000;
			}
			int give()
			{
				dharmik d;
				return d.money + money1;
				
			}
			
};
int main()
{
	satyam s1;
	cout<<endl<<endl;
	cout<<"money recived"<<s1.give();
}