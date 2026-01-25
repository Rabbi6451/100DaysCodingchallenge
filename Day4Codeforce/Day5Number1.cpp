#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter how many row do you need ? ";
    cin>>row;
    cout<<"Enter how many col do you need ? ";
    cin>>col;
    

    int array[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    cout<<"Your array is : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<array[i][j];
        }
    }
}