// Write a function void swap(int *a, int *b) that swaps the values of two variables using pointers. Call this function from main() and display the swapped values.
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x, y;
    cout<<"enter two numbers ";
    cin>>x>>y;
    cout<<endl;
    cout<<"two numbers before swaping";
    cout<<x<<" "<<y;
    swap(&x, &y);
    cout<<"two number after swaping";
    cout<<x<<" "<<y<<endl;
    return 0;
}