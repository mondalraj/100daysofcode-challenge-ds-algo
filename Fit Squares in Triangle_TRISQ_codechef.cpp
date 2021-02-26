#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,b;
	cin>>t;
	while(t--)
	{
	    int ans=0;
	    cin>>b;
	    b=b-2;
	    b=b/2;
	    ans=(b*(b+1))/2;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
