#include<iostream>
#include<map>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> cnt;
        for(int i=0;i<n*n;i++){
            int x; cin>>x;
            cnt[x]++;
        }
        bool ok=true;
        for(auto&p:cnt){
            if(p.second>n*(n-1)){
                ok=false;
                break;
            }
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
}