#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;

    reverse(a.begin(),a.end());

    if(a==a){
        cout<<a<<endl;
        cout<<"YES";
    }else{
        cout<<a<<endl;
        cout<<"NO";
    }
}