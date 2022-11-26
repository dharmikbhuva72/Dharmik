#include<iostream>
#include<fstream>

using namespace std;
class A
{
	private :
	int a;
	public :
	A()
	{	
        ofstream outfile;
        outfile.open("dharmik1.txt ",ios::out);
        cout<<"enter A : ";
        cin>>a;
        outfile<<a<<endl;
        outfile.close();
    
        ifstream  infile;
        infile.open("dharmik1.txt",ios::in);
        cout<<"redding from file ";
        infile>>a;
        cout<<a; 
        infile.close();
   }
};
int main()
{
	A a1;
	
	return 0;
}