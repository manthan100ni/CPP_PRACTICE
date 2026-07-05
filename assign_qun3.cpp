// Write a C++ program to print the first 10 multiples of 7 using a do-while loop.

#include<iostream>
using namespace std;

int main(){
    int i = 1;

    cout << "First 10 multiples of 7 are:\n";

    do
    {
        cout << 7 * i << " ";
        i++;
        cout<<endl;
    }
    while (i <= 10);

    return 0;
}