#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,num,org;
	cin>>t;
	while(t!=0)
	{
	    cin>>num;
	    org=num;
	    int rev=0;
	    
	    while(num!=0)
	    {
	        rev=(rev*10)+(num%10);
	        num=num/10;
	    }
	    
	    
	    if(rev==org)
	       cout<<"wins"<<endl;
	    else 
	       cout<<"loses"<<endl;
	       
	   t--;
	    
	}
	return 0;
}
