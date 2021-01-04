//To check whether the given number is prime or not.

#include <iostream>
using namespace std;
int main()
{
    int num;
    int a;
    cin >> num;

    for (a = 2; a < num; a++)
    {
        if (num % a == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }
    }
    if (num == a)
    {
        cout << "Prime" << endl;
    }
}
