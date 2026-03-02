#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    string S;
    cin >> S;
    
    bool valid = true;
    
    if (S.length() != A + B + 1) {
        valid = false;
    }
    
    if (S[A] != '-') {
        valid = false;
    }
    
    for (int i = 0; i < S.length() && valid; i++) {
        if (i == A) continue;
        
        if (S[i] < '0' || S[i] > '9') {
            valid = false;
        }
    }
    
    cout << (valid ? "Yes" : "No") << endl;
    
    return 0;
}

/*
Input :
3 3
269-665
Output :
Yes
Input : 
1 1
12-
output :
No
Input :
1 2
7444
output :
no
*/