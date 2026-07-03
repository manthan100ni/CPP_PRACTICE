#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter your number 1: ";
    cin >> a;
    cout << "enter your number 2: ";
    cin >> b;
    cout << "enter your number 2: ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greatest number";
        }
        else
        {
            cout << "c is greatest number";
        }
    }
    else if (b > c)
    {
        cout << "b is greatest number";
    }
    else
    {
        cout << "c is greatest number";
    }
    return 0;
}