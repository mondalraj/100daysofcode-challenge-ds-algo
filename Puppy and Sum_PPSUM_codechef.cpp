#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,d,n;
	cin>>t;
	while(t--)
	{
	    cin>>d>>n;
	    int sum=0;
	    for(int i=1;i<=d;i++)
	    {
	        sum=0;
	        for(int j=1;j<=n;j++)
	        {
	            sum=sum+j;
	        }
	        n=sum;
	       
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
