#include<iostream>
using namespace std;
class xyz
{
	private :
	double a,b,c;
	public :
	static int objectcount;
	xyz()
	{
		cout<<"\n\n defoult constructoer ";
		a =10;
		b =12;
		c =13;
		objectcount++;
	}
	xyz(double a,double b,double c )
		{
		
			cout<<"\n\n parameterrized constructor ";
			
			this->a = a;
			this->b = b;
			this->c = c;
			
			objectcount++;
		}
		xyz(const xyz &b1)
		{
			cout<<"\n\ncopy constructor   ";
			a=b1.a;
			b=b1.b;
			c=b1.c;
			objectcount++;
			
		}
		void volume()
		{
			cout<<"\n\n volume is "<<(a*b*c);
		    cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*";
	    } 
};
int xyz::objectcount=0;
int main()	
{
	cout<<"\n object start "<<xyz::objectcount;
	cout<<"\n\n+--+--+--+--+--+--+--+--+--+--+--+";
	xyz A1;
	A1.volume();
	
	xyz A2(10,5,5);
	A2.volume();
	
	xyz A3(A1);
	A3.volume();
	
	cout<<"\n\n+--+--+--+--+--+--+--+--+--+--+--+";
	cout<<"\n        object end "<<xyz::objectcount;
	cout<<"\n+--+--+--+--+--+--+--+--+--+--+--+";
	return 0;
}