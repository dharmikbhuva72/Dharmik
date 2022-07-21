#include<iostream>
using namespace std;
class lecture 
{
	public :
		string lname1,sub1,cour1,lname2,sub2,cour2,lname3,sub3,cour3,lname4,sub4,cour4,lname5,sub5,cour5;
		int lnum1,lnum2,lnum3,lnum4,lnum5;
	
	lecture()
	{
		cout<<endl;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl<<endl;
     	cout<<"         LECTURE DETAILS "<<endl<<endl;
     	cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl<<endl;
     	
     	
		cout<<"enter a lecture number   :  ";
    	cin>>lnum1;
    	cout<<"enter your lecture name  :  ";
     	cin >>lname1;
    	cout<<"enter your subject name  :  ";
    	cin>>sub1;
    	cout<<"enter your course name   :  ";
    	cin>>cour1;
    	cout<<endl;
	    cout<<"......................................"<<endl<<endl;

    	cout<<"enter a lecture number   :  ";
    	cin>>lnum2;
    	cout<<"enter your lecture name  :  ";
     	cin >>lname2;
    	cout<<"enter your subject name  :  ";
    	cin>>sub2;
    	cout<<"enter your course name   :  ";
    	cin>>cour2;
    	cout<<endl;
	    cout<<"......................................"<<endl<<endl;

    	cout<<"enter a lecture number   :  ";
    	cin>>lnum3;
    	cout<<"enter your lecture name  :  ";
     	cin >>lname3;
    	cout<<"enter your subject name  :  ";
    	cin>>sub3;
    	cout<<"enter your course name   :  ";
    	cin>>cour3;
    	cout<<endl;
	    cout<<"......................................"<<endl<<endl;

    	cout<<"enter a lecture number   :  ";
    	cin>>lnum4;
    	cout<<"enter your lecture name  :  ";
     	cin >>lname4;
    	cout<<"enter your subject name  :  ";
    	cin>>sub4;
    	cout<<"enter your course name   :  ";
    	cin>>cour4;
    	cout<<endl;
	    cout<<"......................................"<<endl<<endl;
	
    	cout<<"enter a lecture number   :  ";
    	cin>>lnum5;
    	cout<<"enter your lecture name  :  ";
     	cin >>lname5;
    	cout<<"enter your subject name  :  ";
    	cin>>sub5;
    	cout<<"enter your course name   :  ";
    	cin>>cour5;
    	cout<<endl;
	    cout<<"......................................"<<endl<<endl;
    }
	
	void display()
	{
		cout<<endl<<endl;
		cout<<"lecture number        "<<lnum1<<endl;
		cout<<"lecture name          "<<lname1<<endl;
		cout<<"lecture subject name  "<<sub1<<endl;
		cout<<"subject course  name  "<<cour1<<endl;
		
		cout<<endl<<endl;
		cout<<"lecture number        "<<lnum2<<endl;
		cout<<"lecture name          "<<lname2<<endl;
		cout<<"lecture subject name  "<<sub2<<endl;
		cout<<"subject course  name  "<<cour2<<endl;

        cout<<endl<<endl;
        cout<<"lecture number        "<<lnum3<<endl;
		cout<<"lecture name          "<<lname3<<endl;
		cout<<"lecture subject name  "<<sub3<<endl;
		cout<<"subject course  name  "<<cour3<<endl;
		
		cout<<endl<<endl;
		cout<<"lecture number        "<<lnum4<<endl;
		cout<<"lecture name          "<<lname4<<endl;
		cout<<"lecture subject name  "<<sub4<<endl;
		cout<<"subject course  name  "<<cour4<<endl;
		
		cout<<endl<<endl;
		cout<<"lecture number        "<<lnum5<<endl;
		cout<<"lecture name          "<<lname5<<endl;
		cout<<"lecture subject name  "<<sub5<<endl;
		cout<<"subject course  name  "<<cour5<<endl;
	}
};
int main()
{
	lecture l1;
	l1.display();
	return 0;
}