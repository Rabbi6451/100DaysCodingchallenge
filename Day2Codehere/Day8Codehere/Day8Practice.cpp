#include<iostream>
using namespace std;

int main(){
    int k=2;
    while(--k){
    int b;
    cin>>b;

    vector<int> k(b);
    for(int j=0;j<b;j++){
        cin>>k[j];
    }

    int a;
    cin>>a;

    vector<int> t(a);

    for(int i=0;i<a;i++){
        cin>>t[i];
    }

    reverse(t.begin(), t.end());

    if(t[i] == t[j]){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
}