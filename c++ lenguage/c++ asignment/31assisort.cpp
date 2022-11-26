#include<iostream>
using namespace std;
template <class D>
class sort
{
	public :
	
    D a,b,c,n,arr[5];
    
    
    sort()
    {
    	cout<<"enter size of array  : ";
        cin>>n;
        
        for(a=0;a<n;a++)
        {
        	cout<<endl;
        	cout<<"enter elements  ["<<a<<"]  = ";
        	cin>>arr[a];
		}
	
        for(a=0;a<n;a++)
        {
    	    for(b=a+1;b<n;b++)
    	    {
    		    if(arr[a] > arr[b])
    		    {
    			    c = arr[a];
				    arr[a] = arr[b];
    			    arr[b] = c;
			    }
		    }
		        cout<<"sort elements is = "<<arr[a]<<endl;
	    }   
	
    }

};


int main()
{
	sort <int> s1;
	return 0;
}