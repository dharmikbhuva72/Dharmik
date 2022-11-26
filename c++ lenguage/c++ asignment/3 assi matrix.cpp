#include<iostream>
using namespace std;
class matrix
{
	public :
	int a[3][3],i,j;
	void acceptmatrix()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<endl;
				cout<<"matrix ["<<i<<"]["<<j<<"]  : ";
				cin>>a[i][j];
			}
		}
	}
	
    
	void displaymatrix()
	{
		for(i=0;i<3;i++)
		{
			cout<<"  ";
			for(j=0;j<3;j++)
		    {   cout<<endl;
				cout<<a[i][j];
				cout<<"\t";
			}
			
			cout<<"  ";
			cout<<endl;
		}
	
	}
	
	
     
};
int main()
{
	matrix A1;
	A1.acceptmatrix();
	A1.displaymatrix();
	return 0;
}