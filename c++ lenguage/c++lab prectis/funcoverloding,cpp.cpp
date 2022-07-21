#include<iostream>

using namespace std;
class funcoverloading
{
	public :
		int add (int a,int b)
		{
			return a+b;
		}
		int add(int a,int b,int c)
		{
			return a+b+c;
			
		}
};
int main()
{
	funcoverloading f1;
	cout<<"with 2 parameter "<<f1.add(20,44)<<endl;
	cout<<"with 3 parameter "<<f1.add(10,30,20)<<endl;
	return 0;
}