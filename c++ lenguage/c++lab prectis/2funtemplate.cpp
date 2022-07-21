#include<iostream>
using namespace std;
template <typename D>
D add(D a , D b)
{
	return a + b;
	
}
int main()
{
	cout<<endl;
	cout<<"integer "<<add<int>(10,43)<<endl<<endl;
	cout<<"float "<<add<float>(10.22,21.23)<<endl<<endl;
	cout<<"long long"<<add<long long>(123456789,876965436)<<endl<<endl;
	cout<<"string "<<add<string>("bhuva","dharmik")<<endl<<endl;
	
	return 0;
}