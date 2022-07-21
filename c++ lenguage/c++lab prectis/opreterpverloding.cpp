#include<iostream>
using namespace std;
class A
{
	protected :
		int feet,inches;
	public :	
		A(int f,int i)
		{
		    feet = f;
			inches = i ;
		}
		A operator-()
		{
			feet = -feet;
			inches = -inches;
	        return A(feet,inches);
		 } 
		void display()
		{
			cout<<"\n feet = "<<feet<<"\n inches = "<<inches;
		}
};
int main()
{
	A a1(10,20);
	-a1;
	a1.display();
	return 0;
}