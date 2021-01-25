#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    string b;
    
    cin>>a;
    cin>>b;
    //size of string
    int size1=a.size();
    int size2=b.size();
    cout<<size1<<" ";
    cout<<size2;
    cout<<endl;
    //string concatenate
    string c=a+b;
    cout<<c;
    cout<<endl;

    //swapping first 2 letters of the string
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
  
    return 0;
}
