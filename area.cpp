#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    float l,b,s,area,ch;
    cout<<"\t\t Menu"<<endl;
    cout<<"1. Find the area of square"<<endl;
    cout<<"2. Find the area of rectangle"<<endl;
    cout<<"3. Find the area of triangle"<<endl;
    
    cout<<"Enter your choice - "
    switch(ch)
    {
        case 1:{
            cout<<"Enter the side of the square ";
            cin>>s;
            area=s*s;
            cout<<"Area of the square is "<<area;
            break;
        }

        case 2:{
            cout<<"Enter the length of the rectangle";
            cin>>l;
            cout<<"Enter the breadth of the rectangle";
            cin>>b;
            area=l*b;
            cout<<"Area of the rectangle is "<<area;
        }
        case 3:{
            cout<<"Enter the base of a triangle";
            cin>>b;
            cout<<"Enter the height of the triangle";
            cin>>l;
            area=0.5*l*b;
            cout<<"Area of triangle is "<<area;
        }
        default: cout<<"Wrong choice entered";
        
    }
    return 0;
}