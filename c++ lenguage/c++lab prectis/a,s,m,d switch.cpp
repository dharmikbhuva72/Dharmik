#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<endl;
	cout<<"enter A  : ";
	cin>>a;
	cout<<endl;
	cout<<"enter B  : ";
	cin>>b;
	cout<<endl;
	cout<<"a = "<<a<<"\tb = "<<b<<endl<<endl ;
	cout<<"-------------------------"<<endl;
	cout<<"choice calculator "<<endl;
	cout<<"-------------------------";
	cout<<"\n\n1.addition \n\n2.subtrection \n\n3.multiplication \n\n4.division "<<endl<<endl;
	cout<<"enter your choice  : ";
	cin>>choice;
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	switch(choice) 
	{
		case  1 : cout<<"addition is       = "<<(a+b)<<endl;
		          break;
		case  2 : cout<<"subtrection is    = "<<(a-b)<<endl;
		          break;
		case  3 : cout<<"multiplication is = "<<(a*b)<<endl;
		          break;
		case  4 : cout<<"division is       = "<<(a/b)<<endl;
		          break;
		
		default : cout<<"invalide choice";
	}
}