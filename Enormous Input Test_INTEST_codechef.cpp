#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int count=0;
    cin>>n;
    cin>>k;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%k==0)
          count+=1;
    }
    cout<<count;
    return 0;
    
}