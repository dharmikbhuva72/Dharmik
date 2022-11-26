#include<iostream>
using namespace std;
class A
{
	private :
		int num1,num2;
		friend B(A);
		public :
		A()
		{
			cout<<endl;
			cout<<"enter the number 1 : ";
			cin>>num1;
			cout<<endl;
			cout<<"enter the number 2 : ";
			cin>>num2;
			cout<<endl;
		}
};

int B(A a1)
{
	
	if(a1.num1>a1.num2)
	{
		cout<<"number 1 is greter ";
		
	}
	else
	{
		cout<<"number 2 is greter ";
	}
	return 0;
}

int main()
{
	A a1;
	B(a1);
	return 0;
	
}