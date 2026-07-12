// An Armstrong number is a number that is equal to the sum of cubes of its digits (for a 3-digit number, e.g., 153 = 1³ + 5³ + 3³). Write a program to check whether a given number is an Armstrong number or not.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number Name: ";
    cin>>n;
    int tem, rem, digits= 0, sum =0;
    tem = n;
    while (tem>0)
    {
        digits++;
        tem = tem/10;
        
    }
    tem = n;
    while (tem>0)
    {
        rem = tem % 10;
        sum = sum + pow(rem, digits);
        tem = tem/10;
    }
    if(n == sum){
        cout<<"The Number is armstrong number: "<<n;
    }
    else{
        cout<<"the number is not armstrong number: "<<n;
    }
    return 0;
}