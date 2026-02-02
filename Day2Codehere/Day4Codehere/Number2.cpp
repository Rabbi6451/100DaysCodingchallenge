#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Plz enter a character : ";
    cin>>ch;
    if((ch>='a' && ch<='z' )||( ch>='A' && ch<='Z')){
        cout<<"This is alphabet number ";
    }else if (ch>='0' && ch <='9'){
        cout<<"This is numeric number ";
    }else{
        cout<<"This is spacial number ";
    }
}