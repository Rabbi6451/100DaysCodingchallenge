#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    cout<<"The output is : "<<endl;
    for(int i=0;i<a;i++){
        cout<<t[i]<<endl;
    }

}