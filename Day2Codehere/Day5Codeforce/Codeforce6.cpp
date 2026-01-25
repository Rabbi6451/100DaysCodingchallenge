#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
        int value = max(i);
        cout<<i;
    }
}