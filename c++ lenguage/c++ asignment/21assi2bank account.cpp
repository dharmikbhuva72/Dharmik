#include<iostream>
using namespace std;
class Bank
{
	public :
		
		string Bname,branchN;
		Bank()
		{
			
			Bname ="Bank of Baroda ";
			branchN = "New nikol Branch ";
		}
		void display()
		{
			cout<<endl<<endl;
			cout<<"=========================="<<endl;
			cout<<"       Bank Details "<<endl;
			cout<<"=========================="<<endl<<endl;
			cout<<"Bank Name    : "<<Bname<<endl<<endl;
			cout<<"Branch Name  : "<<branchN<<endl;
		}
		
};


class Saving
{
	public :
		double si,amount,balance,Cbalance,TCbalance,WA;
		long long AN,mno;
		string name,typeA;
		Saving()
		{
			AN = 96241213699876;
			name = "Dharmik bhuva  " ;
			mno = 9624121369 ;
			typeA = "saving"; 
			balance=1000;
		}
		void display()
		{
			cout<<endl<<endl;
			cout<<"=========================="<<endl;
			cout<<"    Bank Account Detils "<<endl;
			cout<<"=========================="<<endl<<endl;
			cout<<"Account Nummber     :  "<<AN<<endl<<endl;
			cout<<"Account Holder Name :  "<<name<<endl<<endl;
			cout<<"Mobile  Number      :  "<<mno<<endl<<endl;
			cout<<"Type of Account     :  "<<typeA<<endl<<endl;
			
			cout<<endl<<endl;
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
			cout<<"       Facillities "<<endl;
	        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*="<<endl<<endl;
	        cout<<"1) Interest And Withdraw Facillities is Avaliable  "<<endl<<endl;
	        cout<<"2) cheque book facillities not avaliable in saving account "<<endl<<endl;
			
		}
		void diposite()
		{
			

			cout<<"Maintain Your Bank Account balance : "<<balance<<endl<<endl;
			cout<<"=========================="<<endl;
			cout<<"     Diposite Details "<<endl;
			cout<<"=========================="<<endl<<endl;
			cout<<"Enter a Diposite Amount  : ";
			cin>>amount;
			Cbalance = balance + amount;
			cout<<endl<<endl;
			cout<<"Your Account Current Balance is = "<<Cbalance<<endl;
			si = (Cbalance*2.5*2)/100;
			cout<<endl;
			cout<<"2 Year Interest is  = "<<si;
			TCbalance = Cbalance + si ;
			cout<<endl<<endl<<endl; 
			cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
			cout<<"   Your Account Current Balance is = "<<TCbalance<<endl;
			cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<endl;
		}
		
		void withdraw()
		{
			cout<<"=========================="<<endl;
		    cout<<"     withdraw detils"<<endl;
		    cout<<"=========================="<<endl<<endl;
			cout<<"Enter Your Withdraw Amount   =  ";
			cin>>WA;
			if(WA < TCbalance)
			{
				TCbalance = TCbalance - WA;
				cout<<endl;
				cout<<"Your Withdraw Amount is  = "<<WA<<endl<<endl;
				cout<<"Your Amount Withdraw Is Successfully "<<endl<<endl;
				cout<<"---------------------------------------------------------------"<<endl;
	    	    cout<<"      dear coustomer your current bank balance is  = "<<TCbalance<<endl;
	    	    cout<<"---------------------------------------------------------------"<<endl<<endl;
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

class Current
{
	public :
		long long AN,mno,balance,amount,Cbalance,WA,lcbalance,TCbalance;
		string name,typeA;
	Current()
		{
			AN = 93283521129876;
			name = "jay joshi  " ;
			mno = 9328352112  ;
			typeA = "current"; 
			balance=10000;
		}
		void display()
		{
			cout<<endl<<endl;
			cout<<"=========================="<<endl;
			cout<<"    Bank Account Detils "<<endl;
			cout<<"=========================="<<endl<<endl;
			cout<<"Account Nummber     :  "<<AN<<endl<<endl;
			cout<<"Account Holder Name :  "<<name<<endl<<endl;
			cout<<"Mobile  Number      :  "<<mno<<endl<<endl;
			cout<<"Type of Account     :  "<<typeA<<endl<<endl;
			
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
			cout<<"       Facillities "<<endl;
		    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*="<<endl<<endl;
		    cout<<"1) Cheque Book Facillities is Availble in Current Account "<<endl<<endl;
		    cout<<"2) Interest Facillites is Not Availble in Current Account "<<endl<<endl;
		    cout<<"3) Maintain Your Bank Account balance : "<<balance<<endl<<endl;
		}
		
		void diposite()
		{
			
			cout<<"=========================="<<endl;
			cout<<"     Diposite Details "<<endl;
			cout<<"=========================="<<endl<<endl;
			cout<<"Enter a Diposite Amount  : ";
			cin>>amount;
			Cbalance = balance + amount;
			cout<<endl; 
			cout<<"---------------------------------------------"<<endl;
			cout<<"   Your Account Current Balance is = "<<Cbalance<<endl;
			cout<<"---------------------------------------------"<<endl<<endl;
		}
		void withdraw()
		{
			cout<<"=========================="<<endl;
		    cout<<"     withdraw detils"<<endl;
		    cout<<"=========================="<<endl<<endl;
			cout<<"Enter Your Withdraw Amount   =  ";
			cin>>WA;
			lcbalance = Cbalance - WA;
			
			if(WA < Cbalance)
			{
				TCbalance = Cbalance - WA;
				cout<<endl;
				cout<<"Your Withdraw Amount is               = "<<WA<<endl<<endl;
				cout<<"Your Amount Withdraw Is Successfully    "<<endl<<endl;
				cout<<"Your Current Bank Balance Is          : "<<lcbalance<<endl<<endl;
	    	    if(lcbalance < 10000)
	    	    {
	    	    	TCbalance = lcbalance - 500;
	    	    	cout<<"You Account Balance Is Low Lees than 10000 "<<endl<<endl;
	    	    	cout<<"You Will Have To Pay A Penalty Of 500."<<endl<<endl;
	    	    	cout<<"---------------------------------------------------------------"<<endl;
	    	        cout<<"      dear coustomer your current bank balance is  = "<<TCbalance<<endl;
	    	        cout<<"---------------------------------------------------------------"<<endl<<endl;
	    	    	
				}
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
	int choice;
	
	Bank b1;
	b1.display();
	cout<<endl;
	
	cout<<" 1) SAVING ACCOUNT \n\n 2) CURRENT ACCOUNT "<<endl<<endl;
	cout<<"please enter the choice  : ";
	cin>>choice;
	
	if(choice == 1)
	{
		Saving s1;
        s1.display();
        s1.diposite();
        s1.withdraw();
	}
	else if(choice == 2)
	{
		Current c1;
        c1.display();
	    c1.diposite();
	    c1.withdraw();
	}
	else
	{
		cout<<"Please Enter A Valid Choice.";
	}
	return 0;
}