#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for (int d : divisors) {
        cout << d << endl;
    }
    return 0;
}   