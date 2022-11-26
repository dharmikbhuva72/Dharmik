#include<iostream>
using namespace std;
class staticdemo 
{
	private :
		double a,b,c;
		public :
			static int objectcount;
			staticdemo(double a,double b,double c)
			{
				cout<<endl;
				cout<<"parameterrized constructor called "<<endl<<endl;
				this->a = a;
				this->b = b;
				this->c = c;
				objectcount++;
			}
			void volume()
			{
				cout<<"volume is "<<(a*b*c)<<endl<<endl;
				cout<<"--------------------------";
			}
};

int staticdemo::objectcount = 0;

int main()
{
	cout<<endl<<endl;
	cout<<"----------------------------------------------";
	cout<<"start object "<<staticdemo::objectcount;
	staticdemo a1(10,15,5);
	a1.volume();
	staticdemo a2(10,12,13);
	a2.volume();
	staticdemo b1(1,2,3);
	b1.volume();
	staticdemo b2(12,3,4);
	cout<<"final object is"<<staticdemo::objectcount;
	return 0;
}