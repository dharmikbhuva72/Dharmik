#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a + b;
}
float add(float a,float b)
{
	return a + b;
}
int main()
{
	cout<<"integer  : "<<add(10,20)<<endl;
	cout<<"float    : "<<add(5.0f,4.9f);
	return 0;
}
