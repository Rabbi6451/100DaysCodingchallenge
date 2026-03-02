#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    while(a--){
        vector<long long> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        reverse(t.begin(), t.end());

        for(int i=0;i<b;i++){
            cout<<t[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}