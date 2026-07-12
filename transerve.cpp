// Write a program that uses a pointer to traverse and print all the elements of an array instead of standard array indexing (i.e., do not use arr[i]).

#include<iostream>
using namespace std;

int main(){
    int a[8]={1,2,34,5,6,76,87,12};
    int* ptr = a;
    cout<<"elments in array are: ";
    for (int i = 0; i < 8; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    
}