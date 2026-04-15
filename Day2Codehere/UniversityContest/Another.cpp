#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count0 = 0; int count1=0;
    for(char c: s){
        if(c=='0') count0++;
        else count1++;
    }
    cout<<abs(count0 - count1) <<endl;
    return 0;


}