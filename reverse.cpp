//. Write a program to reverse a given number mathematically (e.g., input: 1234, output: 4321) and check if the original number and reversed number are equal.
#include<iostream>
using namespace std; 
int main(){
    int n ;
    int reverse = 0;
    int digit = 0;
    cout<<"Enter a number :";
    cin>>n;
    while(n>0){
        digit = n%10;
        reverse = reverse*10+digit;
        n = n/10;
    }
cout<<"Reverse of a given number is :"<<reverse;
return 0;
}