#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    vector<int> t(a);

    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
       if(t[i]<0){
        t[i] = 2;
       }else if(t[i] >0){
        t[i] = 1;
       }
       cout<<t[i]<<" ";
       
    }
    
}