//Write a program to print a rectange whose rows and columns are defined by the user.

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter no. of rows :";
    cin>>row;
    cout<<endl<<"Enter no. of columns :";
    cin>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}