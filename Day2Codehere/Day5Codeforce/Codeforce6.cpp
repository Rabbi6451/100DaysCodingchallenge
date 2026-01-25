#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int> t(a);
    for(long i=0;i<a;i++){
        cin>>t[i];
    }
    sort(t.begin(),t.end());
        cout<<t[a-1];
    
}