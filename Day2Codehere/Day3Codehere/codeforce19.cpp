#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    bool has_decimal = false;
    bool is_float = false;
    string integer_part = "";
    string decimal_part = "";
    
    for(char c : s) {
        if(c == '.') {
            has_decimal = true;
            continue;
        }
        
        if(!has_decimal) {
            integer_part += c;
        } else {
            decimal_part += c;
        }
    }
    
    if(!has_decimal) {
        cout << "int " << s << endl;
    } else {
        for(char c : decimal_part) {
            if(c != '0') {
                is_float = true;
                break;
            }
        }
        
        if(is_float) {
            cout << "float " << integer_part << " 0." << decimal_part << endl;
        } else {
            cout << "int " << integer_part << endl;
        }
    }
    
    return 0;
}