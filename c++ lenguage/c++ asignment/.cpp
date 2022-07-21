#include<iostream>
using namespace std;
class student
{
	public :
		int sid;
		char name;
    student()
	{
		sid = 10;
	}
	
		
};
class sportmark : public student
{
	public :
		int sp;
	sportmark()
	{
  	     sp=50;
	}
};
class result : public sportmark
{
	public :
	int s1,s2,s3,total;
	float per;
	char name[10];
	result()
	{
	
    	s1=20; 
    	s2=30;
    	s3=40;
	    total=s1+s2+s3;
    	per=(float)total/3;
   }
    void display()
	{
		cout<<"student id :"<<sid<<endl;
		cout<<"name   : "<<name<<endl;
	    cout<<"sports mark   : "<<sp<<endl;
		cout<<"percentage   : "<<per;	
     }
	 void getname()
	{
		cout<<"enter name  : ";
		cin>>name;
	} 	
};

int main()
{
	result a1;
	a1.getname();
	a1.display();
	return 0;
	
} 