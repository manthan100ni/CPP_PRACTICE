// Write a C++ program to display the number of days in a month using a switch statement.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"1-31";
        break;
    case 2:
        cout<<"2-28";
        break;
    case 3:
        cout<<"3-31";
        break;
    case 4:
        cout<<"4-30";
        break;
    case 5:
        cout<<"5-31";
        break;
    case 6:
        cout<<"6-30";
        break;
    case 7:
        cout<<"7-31";
        break;
    case 8:
        cout<<"8-31";
        break;
    case 9:
        cout<<"9-30";
        break;
    case 10:
        cout<<"10-31";
        break;
    case 11:
        cout<<"11-30";
        break;
    case 12:
        cout<<"12-31";
        break;
    
    default:
        cout<<"enter a vaild number(1-12)";
        break;
    }    
}
