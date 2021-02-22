#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,sum;
	cin>>t;
	while(t!=0)
	{
	    cin>>a>>b>>c;
	    sum=a+b+c;
	    if(sum==180)
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;
	      
	    t--;
	}
	return 0;
}
