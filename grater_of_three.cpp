#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a number:  ";
    cin >> a;
    cout << "enter a number:  ";
    cin >> b;
    cout << "enter a number:  ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "the largest of these are a: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "the largest of these are b: " << b << endl;
    }
    else
    {
        cout << "the largest of these are c: " << c << endl;
    }
    return 0;
}