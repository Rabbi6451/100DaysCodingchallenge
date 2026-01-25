#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long n;
        cin >> n;
        
        if (n % 2050 != 0) {
            cout << -1 << endl;
            continue;
        }
        
        long long m = n / 2050;
        int sumDigits = 0;
        while (m > 0) {
            sumDigits = sumDigits + m % 10;
            m /= 10;
        }
        
        cout << sumDigits << endl;
    }
    
    return 0;
}  