#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
    vector<int> t(a);
    int maxs=0;
    for(int i=0;i<a;i++) {
        cin>>t[i];
        maxs = max(maxs , t[i]);
    }

    int count =0;
    for(int i=0;i<a;i++){
        if(t[i] == maxs){
            count++;
        }
    }
    cout<<count;
}
}