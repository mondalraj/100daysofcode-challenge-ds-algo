//To find all the prime numbers between two given numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    
    cin>>a>>b;

    for(int num=a;num<=b;num++)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(num==i)
        cout<<num<<endl;
    }
    return 0;
}