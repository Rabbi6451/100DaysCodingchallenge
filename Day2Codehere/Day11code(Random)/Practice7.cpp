#include <iostream>
using namespace std;
int main() {
    long long n, r = 0;
    cin >> n;
    while(n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << r << endl;
}