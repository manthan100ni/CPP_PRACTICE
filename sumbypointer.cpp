#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int a[5];
    int *ptr = a;
    cout<<"enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin>> *(ptr + i);
        cout<<endl;
    }
    for (int i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
        sum++;
    }
    cout << "sum of elements: " << sum << endl;
    return 0;
}