#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter your number 1 : ";
    cin>>a;
    cout<<"Enter your number 2 : ";
    cin>>b;

    char c;
    cout<<"Enter which equation do you want : ";
    cin>>c;
    int result;

    switch(c){
        case '+' :
        result = a+b;
        cout<<"Your result is : " << result<<endl;
        break;

        case '-' :
        result = a-b;
        cout<<"Your result is : " <<result<<endl;
        break;

        case '*' :
        result = a*b;
        cout<<"Your result is : "<<result <<endl;
        break;

        case '/' : 
        result =a/b;
        cout<<"Your result is : "<<result<<endl;
        break;

        case '%' :
        result = a%b;
        cout<<"Your result is : "<<result<<endl;
        break;

        default :
        cout<<"Plz enter a vaild number ";
    } 
}