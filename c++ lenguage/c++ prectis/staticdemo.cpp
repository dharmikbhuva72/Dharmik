#include<iostream>
using namespace std;
class staticdemo
{
	private:
		double l,b,h;
		public:
			static int oc;
			
			staticdemo(double l,double b,double h)
			{
				cout<<"\nparameterrized constructor called "<<endl;
				this->l = l;
				this->b = b;
				this->h = h;		
				oc++;
			}
			void volume()
			{
				cout<<"\n\n volume is "<<(l*b*h);
			}
};
int staticdemo::oc = 0;
int main()
{
	staticdemo s1(5,6,3);
	s1.volume();
	cout<<"\nobject is"<<staticdemo::oc;
	
}