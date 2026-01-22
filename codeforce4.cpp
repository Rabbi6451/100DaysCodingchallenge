#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if(a>b || a==b){
        cout<<"Yes";
    }else if(a<b){
        cout<<"No";
    }
}