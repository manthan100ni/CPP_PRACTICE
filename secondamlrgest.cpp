#include<iostream>
using namespace std;

int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    int largest = 0;
    int secondlargest = 0;
    for (int i = 0; i < 8; i++)
    {
        if(a[i]> largest){
            a[i] = largest;
        }
        if(a[i]>secondlargest && a[i] != largest){
            a[i] = secondlargest;
        }
    }
    cout<<"Largest Number is"<<largest<<endl;
    cout<<"second largest is"<<secondlargest<<endl;
    
}