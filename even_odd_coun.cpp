#include<iostream>
using namespace std;

int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    int count1=0;
    int count2 =0;
    for(int i = 1; i<=8; i++){
        if(i%2 == 0){
            cout<<"even number"<<i<<endl;
            count1++;
        }
        else{
            cout<<"odd number"<<i<<endl;
            count2++;
        }
    }
    cout<<"the number of even are "<<count1<<endl;
    cout<<"the number of odd are "<<count2<<endl;
    return 0;
}