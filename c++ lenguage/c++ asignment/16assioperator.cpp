#include<iostream>
#include<string.h>
using namespace std;
class stringadd
{
	public :
	    char a1[10];
	    char b1[10];
		stringadd(char *str1,char *str2)
		{
			strcpy(a1,str1);
			strcpy(b1,str2);
		
			
		}
		void operator+()
		{
			cout<<endl<<endl;
			cout<<"concateate  = "<<strcat(a1,b1);
		}
};
int main()
{
    char str1[10] = "Dharmik";
    char str2[10] = "Bhuva";
	stringadd a1(str1,str2);
	+a1;
	return 0;
	
}