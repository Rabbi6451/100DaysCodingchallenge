#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int targetedRow = 2;
    int sum=0;

    cout<<"Enter your array : "<<"\n";
    for(int i = 0;i<5;++i){
        for(int j=0;j<5;++j){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<5;j++){
        
            sum= sum + arr[targetedRow][j];
        
    } 
    cout<<"Here is you sum of array : "<<sum;


}