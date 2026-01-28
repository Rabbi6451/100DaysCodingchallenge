#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cin >> n;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "YES";
    else
        cout << "NO";
}   