#include<iostream>
using namespace std;
class Distance 
{
	private :
		int feet,inchase;
		public :
			Distance(int f,int i)
			{
				feet = f;
				inchase = i;
			}
			Distance operator-()
			{
				feet = -feet;
				inchase = -inchase;
				return Distance(feet,inchase);
			}
			void display()
			{
				cout<<"\n feet = "<<feet<<"\n inchase = "<<inchase;
			}
};
int main()
{
	Distance d1(10,20);
	-d1;
	d1.display();
	 return 0;
}