#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "enter your year: ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "this year is a leap year: " << year << endl;
    }
    else
    {
        cout << "this year is a not leap year: " << year << endl;
    }
    return 0;
}