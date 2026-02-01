#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N == 1) {
        cout << 0 << endl;
    } else if (N == 2) {
        cout << 1 << endl;
    } else {
        long long a = 0; 
        long long b = 1;
        long long c;
        
        for (int i = 3; i <= N; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    

}