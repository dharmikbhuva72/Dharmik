#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a;
    ofstream outfile;
    outfile.open("dharmik.txt ",ios::out);
    cout<<"enter A : ";
    cin>>a;
    outfile<<a<<endl;
    outfile.close();
    
    ifstream  infile;
    infile.open("dharmik.txt",ios::in);
    cout<<"redding from file ";
    infile>>a;
    cout<<a;
    infile.close();
  
    
 	return 0;
}