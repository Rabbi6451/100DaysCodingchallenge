#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=7;

    long long product = (a % 100) * (b % 100) % 100;
    cout<<product;
}