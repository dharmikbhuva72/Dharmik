#include<iostream>
using namespace std;
template <typename s>
s add(s a,s b)
{
	return a + b;
}

int main()
{
	cout<<"integer "<<add<int>(12,20)<<endl;
	cout<<"float   "<<add<float>(10.20,10.32)<<endl;
	cout<<"string  "<<add<string>("abc","pqr")<<endl;
	cout<<"long long "<<add<long long>(123456789,987654321)<<endl;
	cout<<" char "<<add<char>('s','a')<<endl;
	return 0;
}