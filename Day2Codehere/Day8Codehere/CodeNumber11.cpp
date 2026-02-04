#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    string S;
    cin >> S;
    
    // Check all conditions
    bool valid = true;
    
    // Check length
    if (S.length() != A + B + 1) {
        valid = false;
    }
    
    // Check hyphen position
    if (S[A] != '-') {
        valid = false;
    }
    
    // Check all characters are valid
    for (int i = 0; i < S.length() && valid; i++) {
        if (i == A) continue;
        
        // Check if character is a digit
        if (S[i] < '0' || S[i] > '9') {
            valid = false;
        }
    }
    
    cout << (valid ? "Yes" : "No") << endl;
    
    return 0;
}