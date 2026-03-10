#include<iostream>
#include<vector>
using namespace std;

int main(){
   long long a;
   cin>>a;

   while(a--){
    int b;
    cin>>b;
    int count = 0;
    vector<long long> t(b);
    for(int i=0;i<b;i++) cin>>t[i];
    for(int i=0;i<b;i++){
        if(t[i]==67){
            count++;
        }
    }
    if(count>0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

   }
}