#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a == 1 || a<1){
        cout<<"-1";
        }else if(a>1 ){
            for(int i=2;i<=a;i = i + 2){
        if(i%2==0){
            cout<<i<<"\n";
        }
        }
        }
    
}