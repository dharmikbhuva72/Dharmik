#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
    ifstream infile;
    infile.open("dharmik1.txt",ios::in);
    cout<<"redding from file ";
    infile>>a;
    cout<<a; 
    infile.close();
	return 0;
}