#include<iostream>
using namespace std;
class sinterest
{
	public :
		int principal;
		float simpleinterest,year,rate;
		sinterest()
		{
			rate = 2.5;
			 
		}
		void accept()
		{
			cout<<"=================================="<<endl;
			cout<<"simple interest  "<<endl;
			cout<<"=================================="<<endl;
			cout<<endl;
			cout<<"enter principal amount  : ";
			cin>>principal;
			cout<<endl;
			cout<<"enter the year          : ";
			cin>>year;
			cout<<endl;
			cout<<"Rate                    : "<<rate;
			cout<<endl<<endl;
			cout<<"simple interest         :"<<(principal*year*rate)/(float)100;
		}

};
int main()
{
	sinterest s1;
	s1.accept();
	return 0;
}