#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    int b = a/365;
    int c = (a%365)/30;
    int d = (a%365)%30;

    cout<< b <<" years " <<"\n";
    cout<< c <<" months " <<"\n";
    cout<< d << " days " <<"\n";
}