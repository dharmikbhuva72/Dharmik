#include<iostream>  
using namespace std;
class box
{
	public :
	double a, b,c;
	
	box()
	{
		cout<<"\n\n default constructor called "<<endl;
		a=10;
		b=20;
		c=30;
	}
	box(double width,double height,double depth)
	{
		cout<<"\n\n parameterized constructor called "<<endl;
		a=width;
		b=height;
		c=depth;
		
	}
	box(const box &b1)
	{
		cout<<"\n\n copy constructor called "<<endl;
		a = b1.a;
		b = b1.b;
		c = b1.c;
		
	}
	void volume()
	{
		cout<<"volume is "<<(a*b*c);
	}
	
	
};
int main()
{
	box a1;
	a1.volume();
	box b1(12,32,5);
	b1.volume();
	box c1(b1);
	c1.volume();
	return 0;
}