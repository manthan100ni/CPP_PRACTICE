#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter your number";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << "Even number" << i << endl;
        }
        else
        {
            cout << "Odd Number" << i << endl;
        }
        i++;
    }
    return 0;
}