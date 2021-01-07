// A simple calculator using switch case.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char ch, cont;

    do
    {
        cout << "Enter two numbers ";
        cin >> a >> b;
        cout<<endl;
        cout << "\t\t MENU" << endl;
        cout << "+ for addition" << endl;
        cout << "- for subtraction" << endl;
        cout << "* for multiplication" << endl;
        cout << "/ for division" << endl;
        cout << "Enter your choice ";
        cin>>ch;

        switch (ch)
        {
        case '+':
        {
            cout << a << "+" << b << "=" << a + b<<endl;
            break;
        }
        case '-':
        {
            cout << a << "-" << b << "=" << a - b<<endl;
            break;
        }
        case '*':
        {
            cout << a << "*" << b << "=" << a * b<<endl;
            break;
        }
        case '/':
        {
            cout << a << "/" << b << "=" << a / b<<endl;
            break;
        }
        default:
            cout << "Wrong choice entered"<<endl;
        }

        cout << "Want to continue? (y/n) ";
        cin >> cont;

    } while (cont == 'y');

    return 0;
}