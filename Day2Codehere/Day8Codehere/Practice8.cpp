#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        
        int sum_a = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            sum_a += val;
        }
        
        if (s < sum_a) {
            cout << "NO\n";
        } else {
            int diff = s - sum_a;
            if (diff % x == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}