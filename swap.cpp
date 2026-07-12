#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;
    *ptr = 20;//update the value of x
    cout << x << " " << *ptr << endl;
    return 0;
}