#include<iostream>
using namespace std;
template <typename  H>
H add(H a,H b)
{
	return a + b;
	
}
int main()
{
	cout<<"integer  : "<<add<int>(10,20)<<endl;
	cout<<"float    : "<<add<float>(5.0f,4.9f)<<endl;
	cout<<"string   : "<<add<string>("abc","pqr")<<endl;
	return 0;
}