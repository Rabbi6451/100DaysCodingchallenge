#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    vector<int> t(a);

    for(int i=0;i<a;i++){
        cin>>t[i];
    }

    for(int i=0;i<b;i++){
        cin>>i;
        cout<<endl;
    }
    for(int i=0;i<b;i++){
        if(i == t[i]){
            cout<<"Found"<<endl;
        }else{
            cout<<"Not Found"<<endl;
        }
    }
}