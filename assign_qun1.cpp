// Write a C++ program to print all numbers between 50 and 100 that are divisible by 5.

#include<iostream>
using namespace std;

int main(){
    for(int i =50; i<=100; i++){
        if(i % 5 == 0){
            cout<<"the numbers are: "<<i<<endl;
        }
    }
    return 0;
}