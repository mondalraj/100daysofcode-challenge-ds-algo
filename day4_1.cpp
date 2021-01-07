// Write a program to print the fabonicci series of nth order.

#include<iostream>
using namespace std;

int main()
{
    int n, c;
    int a=0;
    int b=1;

    cout<<"Enter the nth order of Fabonicci series ";
    cin>>n;
    cout<<endl;
    cout<<a<<" "<<b;

    for(int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;

}