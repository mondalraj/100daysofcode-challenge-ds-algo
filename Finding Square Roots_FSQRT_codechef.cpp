#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,root;
	cin>>t;
	while(t!=0)
	{
	    cin>>n;
	    root=round(sqrt(n));
	    cout<<root<<endl;
	    t--;
	}
	return 0;
}
