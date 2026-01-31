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
    for(int i=0;i<a;i++){
        for(int j=0;j<a-1;j++){
            if(t[j]> t[j+1]){
                long long temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<t[i]<<" ";
    }
}