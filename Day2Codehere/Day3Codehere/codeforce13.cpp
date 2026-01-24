#include<iostream>
using namespace std;

int main(){
    int a, b;
    char s;
    
    cin >> a >> s >> b;
    
    bool is_correct = false;
    
    switch(s){
        case '<':
            is_correct = (a < b);
            break;
        case '>':
            is_correct = (a > b);
            break;
        case '=':
            is_correct = (a == b);
            break;
    }
    
    if(is_correct){
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    
    return 0;
}