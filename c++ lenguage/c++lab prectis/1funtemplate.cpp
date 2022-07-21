#include<iostream>
using namespace std;

template <typename s>

s add(s a,s b)
{
	return a + b;
}
int main()
{
	cout<<"integer "<<add<int>(10,20);
	cout<<"float "<<add<float>(10.10,10.20);
	cout<<"long long "<<add<long long>(123456,98765);
	cout<<"string "<<add<string>("satyam","hirpara");
	
	return 0;
}