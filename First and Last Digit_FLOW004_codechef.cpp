#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t!=0)
	{   int sum=0;
	    cin>>n;
	    int last=n%10;
	    sum=last+sum;
	    while(n!=0)
	    {
	        if(n/10==0)
	          {
	              sum=sum+n;
	          }
	        n=n/10;
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}
