#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t!=0){
	    cin>>a>>b>>c;
	    int arr[3];
	    arr[0]=a;
	    arr[1]=b;
	    arr[2]=c;
	    for(int j=0;j<3;j++)
	    {for(int i=0;i<2;i++)
	    
	        {if(arr[i]<arr[i+1])
	          {
	              int temp=arr[i];
	              arr[i]=arr[i+1];
	              arr[i+1]=temp;
	          }
	        }
	    }
	    cout<<arr[1]<<endl;
	    t--;
	}
	
	return 0;
}
