#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int> t(a);
    for(int i=0; i<a;i++){
        cin>> t[i];
    }
    sort(t.begin(),t.end());
    bool found = false;
    for(int i=0;i+2<a;i++){
        if (t[i+2] - t[i] <= 2 && t[i] != t[i+1] && t[i+1] != t[i+2])
        found = true ;
        break;
    }
    if(found){
        cout<<"yes";
    }else{
        cout<<"NO";
    }
    
}