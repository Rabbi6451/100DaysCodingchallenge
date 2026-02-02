#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin >>ch;
    cout<< ((ch>='a'&&ch<='z')?"it is alphabet " : "it is not alphabet");
}   