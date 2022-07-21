#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<"\n enter A : ";
	cin>>a;
	cout<<"\n enter B : ";
	cin>>b;
	cout<<"\n a = "<<a<<"\t b = ";
	cout<<"\n--------------------";
	cout<<"\nchoice calculator";
	cout<<"\n--------------------";
	cout<<"\n\n1.addition \n\n2.subtrection \n\n3.multiplication \n\n4.division";
	cout<<"\n----------------------------";
	cout<<"\n\n please enter your choice ";
	cin>>choice;
	cout<<"\n----------------------------";
	if(choice == 1)
	{
		cout<<"\n\n addition is        = "<<(a+b);
	}
	else if(choice  == 2)
	{
		cout<<"\n\n subtrection is     = "<<(a-b);
	}
	else if (choice == 3)
	{
		cout<<"\n\n multiplication is  = "<<(a*b);
	}
	else if (choice == 4)
	{
		cout<<"\n\n division is        ="<<(a/b);
	}
	else
	{
		cout<<"\n\n invalide choice ";
	}
	return 0;
 } 