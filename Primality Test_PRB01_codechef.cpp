#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t!=0)
	{   int ans = 0;
	    cin>>n;
	    for(int i=n-1;i>=2;i--)
	    {
	        if(n % i == 0)
	          {
	              ans = 1;
	              break;
	          }
	         
	    }
	    
	    if(ans == 1)
	      cout<<"no"<<endl;
	    else if(n==2)
	      cout<<"yes"<<endl;
	    else if(n==1)
	      cout<<"no"<<endl;
	    else
	      cout<<"yes"<<endl;
	    
	    t--;
	}
	return 0;
}
