#include<iostream>
using namespace std;
class funcoverloding
{
	public :
		int add(int a,int b)
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
	funcoverloding f1;
	cout<<"with 2 parameter "<<f1.add(10,29)<<endl;
	cout<<"with 3 parameter "<<f1.add(10,20,30)<<endl;
	return 0;
}
