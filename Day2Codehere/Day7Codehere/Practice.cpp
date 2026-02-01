#include<iostream> 
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }

    int minNum = t[0];
    for(int i=0;i<a;i++){
        if(t[i] < minNum){
            minNum = t[i];
        }
    }

    int freq = 0;
    for(int i=0;i<a;i++){
        t[i] == minNum;
        freq++;
    }

    if(freq % 2 == 0){
        cout<<"Not Lucky";
    }else if(freq%2 != 0){
        cout<<"Lucky";

    }
}