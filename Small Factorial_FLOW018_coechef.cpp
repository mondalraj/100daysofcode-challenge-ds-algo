#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    int fact=1;
	    for(int i=n;i!=0;i--){
	        fact=fact*i;
	    }
	    cout<<fact<<endl;
	    t--;
	}
	return 0;
}
