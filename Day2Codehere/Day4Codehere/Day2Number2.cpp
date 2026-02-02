#include<iostream>
using namespace std;

int main(){
    char ch;
    int num1,num2;
    int sum,division,multiplication,subtraction;
    cout<<"Enter a which calculation you want : ";
    cin>>ch;
    cout<<"Enter your first number : ";
    cin>>num1;
    cout<<"Enter your second number : ";
    cin >>num2;
    switch(ch){
        case '+' :
        sum = num1+num2;
        cout<<"The sum of two number is : "<<sum;
        break;
        case '-' :
        subtraction = num1/num2;
        cout<<"The subtraction of two number is : "<<subtraction;
        break;
        case '/' : 
        division = num1/num2;
        cout<<"The divison of two number is : "<<division;
        break;
        case '*' : 
        multiplication = num1*num2;
        cout<<"The multiplication of two number is : "<<multiplication;
        break;
        default : 
        cout<<"Plz enter a valid number first .";
        break;
    }
}