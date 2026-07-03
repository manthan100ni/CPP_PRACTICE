#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age<18){
        cout<<"young";
    }
    else if (age>=18 && age<=50)
    {
        cout<<"adult";
    }
    else{
        cout<<"senior citizen";
    }
    return 0;
}