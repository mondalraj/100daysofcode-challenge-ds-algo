#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,q,p;
	cin>>t;
	while(t--)
	{
	    cin>>q>>p;
	    double amount=q*p;
	    
	    if(q>1000)
	    {
	        amount=amount-(0.1*amount);
	    }
	    
	    cout<<fixed<<setprecision(6)<<amount<<endl;
	    
	}
	return 0;
}
