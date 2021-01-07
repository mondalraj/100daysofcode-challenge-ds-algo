//  Write a program to print the factorial of a given number.

#include<iostream>
using namespace std;

int main()
{
    int i, num;
    int fact=1;
    cout<<"Enter a number";
    cin>>num;
    cout<<endl;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }

    cout<<"Factorial of "<<num<<" is "<<fact; 

    return 0;
}