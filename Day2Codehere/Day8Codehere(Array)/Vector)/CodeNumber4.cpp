#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i]; 
        }
        
        if (n == 1) {
            cout << p[0] << "\n";
            continue;
        }
        
        int pos_n = -1;
        for (int i = 0; i < n; i++) {
            if (p[i] == n) {
                pos_n = i;
                break;
            }
        }
        
        if (pos_n == 0) {
            for (int i = 0; i < n; i++) {
                if (p[i] == n-1) {
                    pos_n = i;
                    break;
                }
            }
        }
        
        int r = pos_n;
        int l = max(0, r-1);
        while (l > 0 && p[l-1] > p[0]) {
            l--;
        }
        
        vector<int> result;
        for (int i = r+1; i < n; i++) {
            result.push_back(p[i]);
        }
        for (int i = r; i >= l; i--) {
            result.push_back(p[i]);
        }
        for (int i = 0; i < l; i++) {
            result.push_back(p[i]);
        }
        
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}