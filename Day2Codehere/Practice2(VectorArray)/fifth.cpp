#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int maxDishes = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxDishes = max(maxDishes, a[i]);
        }
        
        int countMax = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == maxDishes) {
                countMax++;
            }
        }
        bool allEqual = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                allEqual = false;
                break;
            }
        }
        
        if (allEqual) {
            cout << n << endl;
        } else {
            cout << countMax << endl;
        }
    }
    
    return 0;
}