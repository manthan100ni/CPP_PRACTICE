#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"enter a number:- ";
    cin>>a;
    cout<<"enter a operator:- ";
    cin>>op;
    cout<<"enter a number: ";
    cin>>b;
    switch (op)
    {
    case '+':
       cout<<a+b;
        break;
    
    case '-':
       cout<<a-b;
        break;
    
    case '*':
       cout<<a*b;
        break;
    
    case '/':
       cout<<a/b;
        break;
    
    default:
    cout<<"enter a vaild operatoe";
        break;
    }
    return 0;
}