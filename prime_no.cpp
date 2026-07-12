#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:- ";
    cin>>n;
    bool is_prime = true;

    for(int i =2; i<=n/2; i++){
        if(n%i==0){
            is_prime = false;
        }
    }
    if(is_prime){
        cout<<n<<" is prime number";
    }
    else{
        cout<<n<<" is not prime number";
    }
    return 0;
}