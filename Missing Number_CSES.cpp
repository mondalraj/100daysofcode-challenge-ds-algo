#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,missing;
	long long int sum1=0,sum2=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n-1;i++)
	{
	    cin>>a[i];
	    sum1=sum1+a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
	    sum2=i+sum2;
	}
	
	missing=sum2-sum1;
	
	cout<<missing;
	return 0;
}
