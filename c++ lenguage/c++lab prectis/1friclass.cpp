#include <iostream>
using namespace std;
class Jay
{
	private :
		int money ;
		friend class Yash;
		public :
			Jay()
			{
				money = 10000;
			}
};

class Yash
{
	private :
		int money1 ;
		public :
			Yash()
			{
				money1 = 90000;
			}
			int gate()
			{
				Jay j1;
				return j1.money + money1;
			}
};
int main()
{
	Yash y1;
	cout<<"money recived "<<y1.gate();
	return 0;
}