// Write a program to print distance between two co-ordinates

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2, d;
    cout << "Enter x-cordinate for point 1 ";
    cin >> x1;
    cout << endl;
    cout << "Enter y-cordinate for point 1 ";
    cin >> y1;
    cout << endl;
    cout << "Enter x-cordinate for point 2 ";
    cin >> x2;
    cout << endl;
    cout << "Enter y-cordinate for point 2 ";
    cin >> y2;
    cout << endl;

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

            cout
        << "Distance between "
        << "(" << x1 << "," << y1 << ") and "
        << "(" << x2 << "," << y2 << ") is " << d;

    return 0;
}