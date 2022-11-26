#include<iostream>
using namespace std;

int main()
{
	string s1 = "tops";
	int len;
	string s2 = "tech";
	string s3;
	s3 = s1 +s2;
	
	cout<<"merge"<<s3;
	len = s3.size();
	cout<<len;
	
	return 0;
}