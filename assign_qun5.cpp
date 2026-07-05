// Write a C++ program to calculate the sum of all even numbers from 1 to N using a for loop.

#include<iostream>
using namespace std;

int main(){
    int n ;
    int sum =0;
    cout<<"enter a number: ";
    cin>>n;
    for(int i =1; i<=n; i++){
        if(i%2 ==0){
            cout<<"the even no are"<<i<<endl;
            sum = sum +i;
        }
    }
    cout<<"sum of all even number = "<<sum;

    return 0;
}