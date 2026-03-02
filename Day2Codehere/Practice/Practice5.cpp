#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    vector<int> t(b+1, 0);

    for(int i=0;i<a;i++){
        int num;
        cin>>num;
        t[num]++;
    }

    for(int i=1;i<=b;i++){
        cout<<t[i]<<endl;
    }

}