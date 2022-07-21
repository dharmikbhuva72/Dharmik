#include<iostream>
using namespace std;
class staticdemo
{
	private :
		double l,b,h;
		public :
			static int objectcount;
			staticdemo(double l,double b,double h)
			{
				cout<<"\n\n parameterrized constructor called ";
				this->l = l;
				this->b = b;
				this->h = h;
				objectcount++;
			}
//			static int getcount()
//			{
//				return objectcount;
//			}
			void volume()
			{
				cout<<"\n\n volume is "<<(l*b*h);
				
			}
			
};
int staticdemo::objectcount = 0;
int main()
{
	cout<<"\nstart a objectcount "<<staticdemo::objectcount;
	staticdemo a1(10,5,5);
	a1.volume();
	cout<<"\n\n final objectcount "<<staticdemo::objectcount;
	return 0;
}