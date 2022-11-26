#include<iostream>
using  namespace std;
class student
{
	public :
	int sid;
	char name[20];
	student()
	{
		sid = 22;
		
	}
	void getname()
	{
		cout<<"enter your name : ";
		cin>>name;
	}
};
class sportmarks 
{
	public :
	int sp;
	sportmarks()
	{
		sp = 35;
	}
	
};
class result : public student , public sportmarks
{
	public :
	int s1,s2,s3,totel;
	float per;
	result()
	{
		s1 = 45;
		s2 = 65;
		s3 = 70;
		totel = s1+s2+s3;
//		cout<<"totel is :"
		per = totel/(float)3;
	}
	void display()
	{
		getname();
		cout<<"\nstudent name  : "<<name;
		cout<<"\nstudent id    : "<<sid;
		cout<<"\nsport marks   : "<<sp;
		cout<<"\npercentage    : "<<per; 
	}
	
};
int main ()
{
	result s1;
	s1.display();
	
	return 0;
}