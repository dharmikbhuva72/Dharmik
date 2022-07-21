#include<iostream>
using namespace std;
class Distance
{
	private :
		int feet,inches;
		public :
			Distance(int f,int i)
			{
				feet = f;
				inches = i;
			}
			void display()
			{
				cout<<"\n feet = "<<feet<<"\n inches = "<<inches;
			}
};
using namespace std;

int main()
{
	Distance d1(19,42);
	d1.display();
	return 0;
}