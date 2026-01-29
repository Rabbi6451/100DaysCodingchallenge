#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cin>>a;
    long long sum = 0;
    
    vector<long long> t(a);

    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
        sum = sum + t[i];
    }
    cout<<abs(sum);
}