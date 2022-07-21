#include<iostream>
using namespace std;
class A
{
	public:
	
	void fibonacci( )
	{
		int a1=0,a2=1,a3;
		int n,i;
		cout<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"fibonacci series  "<<endl;
		cout<<"-------------------------"<<endl<<endl;
		cout<<"enter number  : ";
		cin>>n;
		cout<<a1;
		cout<<"  "<<a2;
		for(i=2;i<n;i++)
		{
			a3=a1+a2;
			a1=a2;
			a2=a3;
			
			cout<<"\t  "<<a3;
			
		}
		
	}
	
	void factorial()
	{
		int a,n,fact=1;
		cout<<endl;
	    cout<<"-------------------------"<<endl;
		cout<<"factorial  series "<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"\n enter number  : ";
		cin>>n;
		
		for(a=1;a<=n;a++)
		{
			fact=fact*a;
			
			
		}
		cout<<endl;
		cout<<"  "<<n<<"factorial is "<<fact;
	}	
	
};
int main()
{
	A a1;
	a1.fibonacci( );
	a1.factorial();
	return 0;

}