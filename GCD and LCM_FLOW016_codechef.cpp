#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,a,b,n1,n2,gcd,lcm;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    n1=a;
	    n2=b;
	    
	    while(n1%n2!=0)
	    {
	        int rem=n1%n2;
	        n1=n2;
	        n2=rem;
	        
	    }
	    gcd=n2;
	    cout<<gcd<<" ";
	    lcm=(a*b)/gcd;
	    cout<<lcm<<endl;
	}
	return 0;
}
