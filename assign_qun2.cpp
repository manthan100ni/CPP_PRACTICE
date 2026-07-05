// Write a C++ program to count the number of digits in a given number using a while loop.

#include<iostream>
using namespace std;

int main() {
    int n, count = 0;
     cout<<"enter a number: ";
     cin>>n;
     if(n ==0){
        count = 1;
     }
     else{
        if(n<0)
        {
            n = -n;
        }
        while(n>0){
            count++;
            n = n/10;
        }
     }
     cout<<"THE NUMBER OD DIGIT: "<<count;
     
    return 0;
}