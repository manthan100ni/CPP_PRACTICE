// Write a C++ program to calculate the product of the digits of a given number using a while loop.
#include<iostream>
using namespace std;
int main() {
    int n, digit, product = 1;
    cout << "Enter a number: ";
    cin >> n;
    while(n > 0) {
        digit = n % 10;       // Get the last digit
        product = product * digit; // Multiply the digit
        n = n / 10;           // Remove the last digit
    }
    cout << "Product of digits = " << product;
    return 0;
}