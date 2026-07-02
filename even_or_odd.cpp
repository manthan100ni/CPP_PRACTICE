#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a number:  ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "the number you enter is even: " << a << endl;
    }
    else
    {
        cout << "the number you enter is odd: " << a << endl;
    }
    return 0;
}