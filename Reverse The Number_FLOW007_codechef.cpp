#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,rem,rev=0;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        cout<<rev<<endl;
        t--;
        rev=0;
    }
	
	return 0;
}
