#include<iostream>
using  namespace std;
class BA
{
	public :
	string name,at;
	long long an;
	
	
	BA(string name,string at,long long an)
	{
		this->name = name;
		this->at  = at;
		this->an = an;
	}
	void dispaly()
	{
		cout<<endl;
	   	cout<<"-------------------------------------"<<endl;  
		cout<<"           Account Detils "<<endl;
		cout<<"-------------------------------------"<<endl<<endl;
		cout<<" Name of the dipositer  : "<<name<<endl<<endl;
		cout<<" Type off Account       : "<<at<<endl<<endl;
		cout<<" Account number         : "<<an<<endl<<endl;
		cout<<"-------------------------------------"<<endl;
	}
	void diposite()
	{
		double amount,balance;
		cout<<"-------------------------------------"<<endl;  
		cout<<"         diposite detils"<<endl;
		cout<<"-------------------------------------"<<endl<<endl;
	    cout<<"Enter a Diposite Amount = ";
	    cin>>amount;
	    balance = amount;
	    cout<<endl;
 	    cout<<"your current balance is = "<<balance<<endl<<endl;
	}
	void withdraw()
	{
		cout<<"-------------------------------------"<<endl;  
		cout<<"         withdraw detils"<<endl;
		cout<<"-------------------------------------"<<endl<<endl;  
		double WA,balance;
		 cout<<"Enter your withdraw amount   = ";
		 cin>>WA;
		
	    if(WA <= balance)
	    {
	    	balance = balance - WA;
	    	cout<<endl;
	    	cout<<"your withdraw amount is      = "<<WA<<endl<<endl;
	    	cout<<"your amount withdraw is successfully"<<endl<<endl;
    		cout<<"---------------------------------------------------------------"<<endl;
	    	cout<<"      dear coustomer your current bank balance is  = "<<balance<<endl;
	   		cout<<"---------------------------------------------------------------"<<endl;
	    
		}
		else
		{
			cout<<endl<<endl;
			cout<<"-------------------------------------"<<endl;
			cout<<" your account balance is insuffcient "<<endl;
			cout<<"-------------------------------------"<<endl<<endl;
			
    	}
    }
};

int main()
{
	BA A1("Dharmik Bhuva","saving",98793261212);
	A1.dispaly();
    cout<<endl; 
    cout<<"Account balance is      = 0 "<<endl<<endl<<endl;
	
	A1.diposite(); 
    
    A1.withdraw();
    
	return 0;
}