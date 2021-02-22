#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,min,max;
	cin>>t;
	while(t!=0)
	{
	    cin>>a;
	    cout<<" ";
	    cin>>b;
	    if(a>b)
	      min=a;
	    else
	      min=b;
	      
	    max=a+b;
	    
	    cout<<min<<" "<<max;
	    t--;
	}
	return 0;
}
