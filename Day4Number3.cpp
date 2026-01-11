#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string rev="hello";
    reverse(rev.begin(),rev.end());
    cout<<rev;
}