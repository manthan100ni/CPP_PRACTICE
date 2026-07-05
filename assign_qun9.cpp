// Write a C++ program to find the largest digit in a given number using a while loop.

#include<iostream>
using namespace std;
int main() {
    int n, digit, largest = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n > 0) {
        digit = n % 10;   // Get the last digit
        if(digit > largest) {
            largest = digit;
        }
        n = n / 10;       
    }
    cout << "Largest digit = " << largest;
    return 0;
}