#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    sort(t.begin(), t.end());
    for(int i=0;i<a;i++){
        cout<<t[i];
    }
}