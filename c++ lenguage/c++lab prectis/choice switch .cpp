#include<iostream>
using namespace std;

class C{
	int a,b,choice;
	public:
	int accept ()
	{
		cout <<endl;
		cout<<"enter A  : ";
		cin>>a;
		cout <<endl;
	    cout<<"enter B  : ";
		cin>>b;
		cout <<endl;
		cout<<" A  = "<<a<<" B = "<<b<<endl;
		cout<<"\n-----------------------------------"<<endl;
		cout<<"choice claculater  "<<endl;
		cout<<"\n-----------------------------------"<<endl;
		cout<<"\n1.addition \n\n2.subtrection \n\n3.multiplication \n\n4.division "<<endl<<endl;
		cout<<"enter your choice  : ";
		cin>>choice;
		cout<<"\n-----------------------------------";
		cout <<endl;
		
		return 0;
	}
	int ddd()
	{
		switch(choice)
		{
			case 1 : cout<<"addition is        =  "<<(a+b)<<endl;
			         break;
			case 2 : cout<<"subtreaction is    =  "<<(a-b)<<endl;
			         break;
			case 3 : cout<<"multiplication is  =  "<<(a*b)<<endl; 
			         break;
			case 4 : cout<<"division is        =  "<<(a/b)<<endl;         
			         break;
		    default:cout<<"invalide choice ";
	    }
	    return 0;
    }

};
int main()
{
	C a1;
	a1.accept();
	
	a1.ddd();
	return 0;
}