#include<iostream>
using namespace std;

int main(){
    float a;
    float b=1000;
    float c=.3;

    for(int i=1;i<=30;i++){
        a = b * pow(1+c , i);
        cout<< i <<"-------"<< a <<endl;
    }
}