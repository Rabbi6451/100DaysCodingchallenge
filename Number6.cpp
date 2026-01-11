#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int sum = 0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++){
        int k = i*a;
        sum = sum + k;
    }
   if(sum>b){
    cout<<sum-b;
   }else{
    cout<<"0";
   }
}