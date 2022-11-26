#include<iostream>
using namespace std;

class book
{
	public :
		int price;
		string nauthor,ntitel,npublisher;
		 
		book(string nauthor,string ntitel,string npublisher,int price)
		 {
		 	this->nauthor = nauthor;
			this->ntitel = ntitel;
			this->npublisher = npublisher;
			this->price = price; 
		 }
	    
		void display()
		{
			cout<<endl<<endl;
			cout<<"-------------------------------------"<<endl;  
			cout<<"-------  MAHADEV BOOK STORE  ------- "<<endl;
			cout<<"-------------------------------------"<<endl;  
		    
			cout<<endl<<endl;
	     	cout<<"-------------------------------------"<<endl;  
		    cout<<"        BOOK STORE DETILS "<<endl;
	    	cout<<"-------------------------------------"<<endl<<endl;
	    	cout<<"  Name Of The Author     : "<<nauthor<<endl<<endl;
	    	cout<<"  THE Name of The Book   : "<<ntitel<<endl<<endl;
	    	cout<<"  Name of The Publisher  : "<<npublisher<<endl<<endl;
	    	cout<<"  The Cost of The Book   : "<<price<<endl<<endl;
		 }
};
int main()
{
	book a1("Dinkar Joshi","Mahamanav Sardar","Pravin Prakashan",328 );
	a1.display();
	
	return 0;
}