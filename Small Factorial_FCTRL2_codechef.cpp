#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int n, i, j, d=1, a[200], temp=0;
	cin>>n;
	a[0]=1;
	for(i=2;i<=n;i++)
	{
	    for(j=0;j<d;j++)
	    {
	        int x=a[j]*i+temp;
	        a[j]=x%10;
	        temp=x/10;
	    }
	    while(temp!=0)
	    {
	        a[d]=temp%10;
	        temp=temp/10;
	        d++;
	    }
	}
	for(int x=d-1;x>=0;x--)
	cout<<a[x];
	cout<<endl;
	}
	return 0;
}
