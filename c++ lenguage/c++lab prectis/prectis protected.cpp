#include<iostream>
using namespace std;
class deta
{
	private :
		int a=10;
		protected :
			void show()
			{
				cout<<"enter a = "<<a;
				
			}
};
class code : public deta
{
	private :
		int b=20;
		public :
			void display()
			{
				show();
				cout<<"\n enter b = "<<b;
			}
};
int main ()
{
	code a1;
	a1.display();
}