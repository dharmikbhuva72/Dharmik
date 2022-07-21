#include<iostream>
using namespace std;
class data{
	private :
		int a = 9;
		protected :
			void show()
			{
				cout<<"enter A  : "<<a;
			}
};
class code : public data{
	private :
		int b = 10;
		public :
			void display()
			{
				show();
				cout<<"\n enter B  : "<<b;	
				
			}
};
int main()
{
	code a1;
	a1.display();
	
}