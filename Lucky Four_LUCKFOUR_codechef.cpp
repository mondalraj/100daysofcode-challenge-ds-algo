#include <iostream>
using namespace std;

int main() {
	int t,a,count;
	cin>>t;
	while(t!=0)
	{
	    count=0;
	    cin>>a;
	    while(a!=0)
	    {
	        if(a%10==4)
	        {
	            count=count+1;
	        }
	        a=a/10;
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}
