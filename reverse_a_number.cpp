// WAP to print the reverse of a number 

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;

    cout<<"The reverse of a given number is ";
    while(num>0)
    {
        int rem;
        rem=num%10;
        cout<<rem;
        num=num/10;
    }

    return 0;
}