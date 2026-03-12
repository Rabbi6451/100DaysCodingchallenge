#include<iostream>
using namespace std;

void printnumbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i;
        if(i<n){
            cout<<" ";
        }
    }
}
int main(){
    int a;
    cin>>a;

    printnumbers(a);
    
}
