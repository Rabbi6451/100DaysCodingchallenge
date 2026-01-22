#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> w(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> w[i];
            sum += w[i];
        }
        
        if (sum == x) {
            cout << "NO" << endl;
            continue;
        }
        
        sort(w.begin(), w.end());
        
        int prefix = 0;
        for (int i = 0; i < n; i++) {
            prefix += w[i];
            if (prefix == x) {
                swap(w[i], w[n - 1]);
                break;
            }
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << w[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}