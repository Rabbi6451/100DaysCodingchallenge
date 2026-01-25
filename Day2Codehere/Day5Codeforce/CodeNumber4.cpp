#include <iostream>
using namespace std;

int main() {
    int x;
    const int correctPassword = 1999;
    
    while (true) {
        cin >> x;
        if (x == correctPassword) {
            cout << "Correct" << endl;
            return 0; 
        } else {
            cout << "Wrong" << endl;
        }
    }
    
    return 0;
}