#include<iostream>
using namespace std;

class person
{
	public :
		string Pname;
		int age;
		person()
		{
			Pname = "Dharmik Bhuva";
			age  = 21;
			
		}
};
class student
{
	public :
		int sub1,sub2,sub3,totel;
		float per;
		
		student()
		{
			sub1 = 54;
			sub2 = 66;
			sub3 = 97;
			totel = sub1+ sub2 + sub3;
			per = totel/(float)3;
		}
};
class techar : public person,public student
{
	public :
		int salary ;
		techar()
		{
			salary = 32000;
		}
		void dispalay ()
		{
		
		    cout<<"    person details"<<endl<<endl;
			cout<<"Person name    : "<<Pname<<endl<<endl;
			cout<<"person age     : "<<age<<endl;
			cout<<"------------------------------------"<<endl<<endl;
			
		
			cout<<"    Student details"<<endl<<endl;
			cout<<"Percentage is  : "<<per<<endl<<endl;
			cout<<"------------------------------------"<<endl<<endl;
	
			cout<<"   Teachar details"<<endl<<endl;
			cout<<"Teachar salary : "<<salary<<endl<<endl;
			cout<<"===================================="<<endl<<endl;
		}
};
int main()
{
	techar t1;
	t1.dispalay();
	return 0;
}