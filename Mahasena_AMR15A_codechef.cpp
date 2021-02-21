#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[n];
	int lucky=0, notlucky=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	for(int j=0;j<n;j++)
	{
	    if(a[j]%2==0)
	      lucky=lucky+1;
	    else
	      notlucky=notlucky+1;
	}
	
	if(lucky>notlucky)
	  cout<<"READY FOR BATTLE";
	else
	  cout<<"NOT READY";
	return 0;
}
