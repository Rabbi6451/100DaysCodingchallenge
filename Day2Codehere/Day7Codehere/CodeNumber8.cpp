#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a;

    cin>>a;
    vector<long long> t(a);
    
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    long long b;
    cin>>b;
    auto it = find(t.begin(), t.end() , b);

    if(it != t.end()){
        cout<<(it - t.begin());
    }else{
        cout<<"-1";
    }
}