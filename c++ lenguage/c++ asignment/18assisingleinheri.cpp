#include<iostream>
using namespace std;
class Cricketer{
	public :
		string bname;
		int tr,bestP,tm;
		float ar;
		Cricketer()
		{
			bname = "MS Dhoni";
			tr = 10773;
			bestP = 183 ;
			tm = 350;
			ar = tr/(float)tm;
		}
		
		
};

class Batsman : public Cricketer{
	
	public :
		void Display()
		{
			cout<<endl<<endl;
			cout<<"\t\t--------------------------------------"<<endl<<endl;
			cout<<"\t\t -*-*-*-- CRICKETER DETAILS -*-*-*-*- "<<endl;
			cout<<"\t\t--------------------------------------"<<endl<<endl;
			cout<<"\t\tCricketer Name         : "<<bname<<endl<<endl;
			cout<<"\t\tTotel match            : "<<tm<<endl<<endl;
			cout<<"\t\tTotel Run              : "<<tr<<endl<<endl;
			cout<<"\t\tODI best performance   : "<<bestP<<endl<<endl;
			cout<<"\t\tAverage Run            : "<<ar<<endl<<endl; 
			cout<<"\t\t--------------------------------------"<<endl<<endl;
			cout<<endl<<endl;
		}
		
	
};

int main()
{
    Batsman b1;
	b1.Display();
	return 0;
}