#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }

    
        cout<<"A[0] = "<<t[0]<<endl;
        cout<<"A[1] = "<<t[1]<<endl;
        cout<<"A[3] = "<<t[3]<<endl;
    
}