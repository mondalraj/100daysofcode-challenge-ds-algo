// WAP to check whether a number is Armstrong or not.

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;

    int sum = 0;
    int n = num;

    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        sum = sum + rem * rem * rem;
    }
    if (sum == num)
    {
        cout << num << " is an Armstrong number";
    }
    else
    {
        cout << num << " is not an Armstrong number";
    }

    return 0;
}
