#include<iostream>
using namespace std;

int factorial (int num);
int main(){
    cout<<factorial(10);
}
int factorial(int num){
    int result = 1;
    for(int i=1;i<=num;i++){
        result = result * i;
    }
    return result;
}