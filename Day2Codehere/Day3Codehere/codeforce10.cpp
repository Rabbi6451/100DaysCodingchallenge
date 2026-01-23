#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;

    int b = a[0] % 2;
    if(b==0){
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
}