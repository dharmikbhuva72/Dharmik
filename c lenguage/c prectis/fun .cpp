#include<iostream>
int add(int a,int b);
using namespace std;

int main()
{
	int a1 = 7,b1 = 7;
	cout<<"addition = "<<add(a1,b1);
	return 0;
}

int add(int a,int b)
{
	return a + b;
}
