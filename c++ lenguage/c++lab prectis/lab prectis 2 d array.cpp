#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3];
	
	cout<<" enter a array 1 elements ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<endl;
			cout<<endl;
			cout<<"elements ["<<i<<"] ["<<j<<"]  : ";
			cin>>a[i][j];	
     	}
	}
	cout<<endl;
	cout<<endl;
	cout<<" enter a array 2 elements ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<endl;
			cout<<endl;
			cout<<"elements ["<<i<<"] ["<<j<<"]  : ";
			cin>>b[i][j];		
	    }
	}

	cout<<endl;
	cout<<endl;
	cout<<" addition is array 1 and 2 "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<"   "<<c[i][j];	
		}
		cout<<endl;
	}
	
return 0;
} 
