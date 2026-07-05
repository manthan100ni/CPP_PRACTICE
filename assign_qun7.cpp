// Write a C++ program to print the numbers from N to 1 using a do-while loop.\

#include<iostream>
using namespace std;

int main(){
    int n;
     cout<<"ENTER A NUMBER: ";
     cin>>n;
    int i = n;
    do{
        i--;
        cout<<"the number are: "<<i<<endl;

    }while(i>=1);
    return 0;
}