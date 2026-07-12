#include<iostream>
using namespace std;

int main(){
    int a[9] = {1,2,3,4,5,65,54,34,43};
    int largest = a[0];
    int smallest = a[0];
    for(int i = 0; i<9; i++){
        if(a[i]<smallest){
            smallest = a[i];
        }
        if(a[i]>largest){
            largest = a[i];
        }
    }
    cout<<"the largest number is: "<<largest<<endl;
    cout<<"the smallest number is: "<<smallest<<endl;

    return 0;
}