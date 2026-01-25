#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int> t(a);
    for(int i=0; i <a; i++){
        cin>>t[i];
    }
    if(a>0){
    swap(t[0],t[a-1]);
    }
    for(int i =0;i<a;i++){
        cout<<t[i]<<" ";
    }

}