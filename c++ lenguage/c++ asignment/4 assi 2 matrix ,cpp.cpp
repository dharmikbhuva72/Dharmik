#include<iostream>
using namespace std;
class matrix 
{
	public :
	int i,j;
	int a[3][3],b[3][3],c[3][3];
	void fastmatrix()
	{
		cout<<endl;
		cout<<"ENTER FIRST MATRIX"<<endl<<endl;
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
			    cout<<"matrix elements ["<<i<<"]["<<j<<"] : ";
			    cin>>a[i][j];
		    }
     	}
    }
    void secondmatrix()
    {
    	cout<<endl<<endl;
    	cout<<"ENTER SECOND MATRIX"<<endl<<endl;
		for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
			    cout<<"matrix elements ["<<i<<"]["<<j<<"] : ";
		    	cin>>b[i][j];
	    	}
    	}
    }
    void additionmatrix()
    {
    	cout<<endl<<endl;
    	cout<<"ADITION OF TWO MATRIX"<<endl<<endl;
		for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
			    c[i][j] = a[i][j] + b[i][j];
		    	cout<<"\t"<<c[i][j];
	    	}
	    	cout<<endl;
    	}
    }
	
};
int main()
{
	matrix a1;
	a1.fastmatrix();
	a1.secondmatrix();
	a1.additionmatrix();
	return 0;
}