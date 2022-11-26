#include<iostream>
using namespace std;
class Jay
{
	private :
		long long number =0;
		friend Dharmik(Jay);
		
	
};
int Dharmik(Jay j)
{
	j.number += 100000000;
	return j.number;
}
int main()
{
	Jay j1;
	cout<<"number ricived "<<Dharmik(j1);
	
	return 0;
	
}