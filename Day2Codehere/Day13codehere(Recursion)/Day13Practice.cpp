#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    for(int i=0;i<n;i++){
        int x=t[i];
        vector<int> binary;
        while(x>0){
        binary.push_back(x%2);
        x=x/2;
        }
        for(int j= binary.size()-1;j>=0;j--){
        cout<<binary[j];
    }
       
    cout<<"\n";
}
}