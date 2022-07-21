#include<iostream>
using namespace std;
class box
{
	public :
	double a,b,c;
	box()
	{
		cout<<"\ndefaulte constructor is called  ";
		a=10;
		b=20;
		c=30;
	}
	box(double w,double h,double d)
	{
		cout<<"\nparameterized constructor is called ";
		a=w;
		b=h;
		c=d;
	}
	box(const box &b1)
	{
		cout<<"\ncopy constructor is called ";
		a = b1.a;
		b = b1.b;
		c = b1.c;
	}
	
	void volume()
	{
		cout<<"\nvolume is "<<(a*b*c)<<endl;
	}
};
int main()
{
	box a1;
	a1.volume();
	
	box a2(1,2,3);
	a2.volume();
	
	box a3(a1);
	a3.volume();
	
	return 0;
}