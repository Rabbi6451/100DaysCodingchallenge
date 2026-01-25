#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    
    cout << min(n * a, min((n + m - 1) / m * b, n / m * b + min((n % m) * a, b)));
    
    return 0;
}