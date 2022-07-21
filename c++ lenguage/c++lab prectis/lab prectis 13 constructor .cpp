#include<iostream>
using namespace std;

class box
{
	public :
	double a,b,c;
	box()
	{
		cout<<"\n defoult constructor ";	
		a = 5;
		b = 5;
		c = 10;
	}
	box(double w,double h,double d)
	{
		cout<<"\n parameterized constructor ";
		a = w;
		b = h;
		c = d;
	}
	box(const box &b1)
	{
		cout<<"\n copy constructoe ";
		a = b1.a;
		b = b1.b;
		c = b1.c;
	}
	void volume()
	{
		cout<<"\n volume is "<<(a*b*c)<<endl;
	}
};

int main()
{
	box a1;
	a1.volume();
	
	box a2(10,10,20);
	a2.volume();
	
	box a3(a2);
	a3.volume();
	
	return 0;
}