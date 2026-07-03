#include<iostream>
using namespace std;

int main(){
    float w, h , bmi;
    cout<<"enter your weight in kg: ";
    cin>>w;
    cout<<"enter your height in meters: ";
    cin>>h;
    bmi = w/(h*h);
    if(bmi<18.5){
        cout<<"underweight"<<bmi;
    }
    else if (bmi>=18.5 && bmi<=24.9)
    {
        cout<<"normal weight"<<bmi;
    }
    else if (bmi>=25 && bmi<=29.9)
    {
        cout<<"over weight"<<bmi;
    }
    else{
        cout<<"obese"<<bmi;
    }
}