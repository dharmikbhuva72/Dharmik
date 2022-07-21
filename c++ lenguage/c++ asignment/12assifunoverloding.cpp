#include<iostream>
using namespace  std;

class CRT
{
	public :
	
	int show(int r)
	{
		return (3.14*r*r);
	}
	int show(float l,float w)
	{
		return (l*w);
	}
	int show(int b,int h)
	{
		return (b*h)/2;
	}
};
int main()
{
	CRT c1;
	cout<<endl<<endl;
	cout<<"Circles Area       : "<<c1.show(10)<<endl<<endl;
	cout<<"Rectirangles Area  : "<<c1.show(23,32)<<endl<<endl;
	cout<<"Tirangles Area     : "<<c1.show(10,20)<<endl<<endl;
	
	return 0;
}