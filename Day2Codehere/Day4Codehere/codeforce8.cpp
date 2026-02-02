#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;
   
    // Using ASCII values
    if (X >= 97 && X <= 122) {      // Lowercase: 97-122
        // Convert to uppercase (subtract 32)
        cout << char(X - 32) << endl;
    }
    else if (X >= 65 && X <= 90) {  // Uppercase: 65-90
        // Convert to lowercase (add 32)
        cout << char(X + 32) << endl;
    }
    
    return 0;
}