#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    count=0;
	    while(n!=0)
	    {
	        if(n/100!=0)
	        {
	            count=n/100+count;
	            n=n-(100*(n/100));
	            
	        }
	        else if(n/50!=0)
	        {
	            count=n/50+count;
	            n=n-(50*(n/50));
	            
	        }
	        else if(n/10!=0)
	        {
	            count=n/10+count;
	            n=n-(10*(n/10));
	            
	        }
	        else if(n/5!=0)
	        {
	            count=n/5+count;
	            n=n-(5*(n/5));
	            
	        }
	        else if(n/2!=0)
	        {
	            count=n/2+count;
	            n=n-(2*(n/2));
	            
	        }
	        else if(n/1!=0)
	        {
	            count=n/1+count;
	            n=n-(1*(n/1));
	            
	        }
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
