#include <iostream>
using namespace std;

int main() {
    int a, b,c;
    cin >> a >> b;

    int count=0;
    for(int i = 0;i<a;i++){
        cin>>c;
        if(c>5&&c>0){
            count++;
        }
    }
    cout<<count;
}   