#include<iostream>
using namespace std;
class format
{
	public : 
	void rollno()
	{
		cout<<endl<<endl;
		cout<<"===================================================="<<endl<<endl;
		cout<<"Roll No\t  Sub1\t Sub2\tSub3\tTotel\tpercentage  "<<endl<<endl;
		cout<<"===================================================="<<endl<<endl;
		cout<<"   1\t !  30\t  25\t 45\t 100\t "<<100/(float)3<<endl<<endl;
		cout<<"   2\t !  25\t  20\t 25\t 70\t "<<70/(float)3<<endl<<endl;
		cout<<"   3\t   20\t  15\t 35\t 70\t "<<70/(float)3<<endl<<endl;
		cout<<"   4\t   35\t  30\t 40\t 105\t "<<105/(float)3<<endl<<endl;
		cout<<"===================================================="<<endl<<endl;
	}

};

int main()
{
	format a1;
	a1.rollno();
	return 0;
}