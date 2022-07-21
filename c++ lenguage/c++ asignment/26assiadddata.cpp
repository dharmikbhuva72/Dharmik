#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
    ofstream outfile;
    outfile.open("dharmik2.txt ",ios::out);
    cout<<"enter A : ";
    cin>>a;
    outfile<<a<<endl;
    
    
    ifstream  infile;
    infile.open("dharmik2.txt",ios::in);
    cout<<"redding from file ";
    infile>>a;
    cout<<a; 
  
    outfile.open("dharmik2.txt",ios::app);
    if(infile.is_open())
    cout<<endl;
    cout<<"enter A : ";
    cin>>a;
    outfile<<a<<endl;
    cout<<"data appended ";
    outfile.close();
    infile.close();
    
	return 0;
}