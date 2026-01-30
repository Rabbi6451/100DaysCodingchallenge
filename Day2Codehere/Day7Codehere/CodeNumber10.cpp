#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<long long> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    reverse(t.begin(), t.end());

    for(int i=0;i<a;i++){
        cout<<t[i]<<" ";
    }
}