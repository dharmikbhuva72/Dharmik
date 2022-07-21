#include<iostream>
using namespace std;
class student 
{
	protected :
		int sid ;
		char name[20];
		
		student()
		{
			sid = 23;
		}
		void getname()
		{
			cout<<"enter your name : ";
			cin>>name;
		}
};
class sportsmarks : public student 
{
	public :
		int sp;
		sportsmarks()
		{
			sp = 30;
		}
		void display()
		{
			getname();
			cout<<"\n\nname       : "<<name;
			cout<<"\nsid        : "<<sid;
			cout<<"\nsport mark : "<<sp;
		}
};
int main()
{
	sportsmarks sp;
	sp.display();
return 0;
	
}