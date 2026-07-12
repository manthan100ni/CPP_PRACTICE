#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "enter starting number";
    cin >> start;
    cout << endl;
    cout << "enter ending number";
    cin >> end;
    for (int n = start ; n <= end; n++)
    {
        if (n <= 1)
        {
            continue;
        }
        bool is_prime = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << n << " ";
        }
    }
    return 0;
}