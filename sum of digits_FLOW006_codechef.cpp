#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, sum, rem;
	cin>>t;
	while(t--){
	    sum=0;
	    cin>>n;
	    while(n!=0){
	        rem=n%10;
	        sum=sum+rem;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
