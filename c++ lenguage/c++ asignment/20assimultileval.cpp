#include<iostream>
using namespace std;
class student
{
	public :
		int rollno,std;
		char name[25];
		
		
			student ()
			{
				cout<<"----------------------------"<<endl;
				cout<<"    Enter Student Detils "<<endl;
				cout<<"----------------------------"<<endl<<endl;
				cout<<"Enter a Standerd    : ";
				cin>>std;
				cout<<endl;
				cout<<"Enter Your Roll No  : ";
				cin>>rollno;
				cout<<endl;
				cout<<"Enter Your Name     : ";
				cin>>name;
				cout<<"================================="<<endl<<endl;
		    }
	
};
class exam  : public student
{
	public  :
		int sub1,sub2,sub3,sub4,sub5;
	
			
			exam()
			{
				cout<<"----------------------------"<<endl;
				cout<<"Enter Student Subject marks "<<endl;
				cout<<"----------------------------"<<endl<<endl;
				cout<<"enter a subject 1 mark  : ";
				cin>>sub1;
				cout<<endl;
				cout<<"enter a subject 2 mark  : ";
				cin>>sub2;
				cout<<endl;
				cout<<"enter a subject 3 mark  : ";
				cin>>sub3;
				cout<<endl;
				cout<<"enter a subject 4 mark  : ";
				cin>>sub4;
				cout<<endl;
				cout<<"enter a subject 5 mark  : ";
				cin>>sub5;
				cout<<endl;
				cout<<"==================================="<<endl<<endl;
			}
};
class result : public exam
{
	
       public :
		int totel ;
		float per;
		
		result()
		{
			totel = sub1+sub2+sub3+sub4+sub5;
			per = totel / (float)5;
		}
		void display ()
		{
			cout<<"---------------------------"<<endl;
			cout<<"     Student Detils  "<<endl;
			cout<<"---------------------------"<<endl<<endl;
			
			cout<<" Standerd    : "<<std;
			cout<<endl;
			cout<<" Roll no     : "<<rollno;
			cout<<endl;
			cout<<" name        : "<<name;
			cout<<endl;
			cout<<"==============================="<<endl<<endl<<endl;
			
			cout<<"---------------------------"<<endl;
			cout<<"   Student Subject Detils"<<endl;
			cout<<"---------------------------"<<endl<<endl;
			
			cout<<" subject 1 mark  : "<<sub1<<endl;
			cout<<" subject 2 mark  : "<<sub2<<endl;	
			cout<<" subject 3 mark  : "<<sub3<<endl;
			cout<<" subject 4 mark  : "<<sub4<<endl;
			cout<<" subject 5 mark  : "<<sub5<<endl;
			cout<<"================================="<<endl<<endl<<endl;
			
			cout<<"---------------------------"<<endl;
			cout<<"       Student Result      "<<endl;
			cout<<"---------------------------"<<endl<<endl;
			
			cout<<" Subject Totel Mark "<<totel<<endl;
			cout<<endl<<endl;
			cout<<" Percentage         "<<per<<endl;
			
						
		}
	
};
int main()
{
	result r1;
	r1.display();
	return 0 ;
}