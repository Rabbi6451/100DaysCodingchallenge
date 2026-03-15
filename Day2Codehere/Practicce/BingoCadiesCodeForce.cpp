#include <iostream>
#include<map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> freq;
        int maxFreq = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int color;
                cin >> color;
                freq[color]++;
                maxFreq = max(maxFreq, freq[color]);
            }
        }
        
        int limit = (n * n + 1) / 2;  // ceil(n²/2)
        
        if (maxFreq > limit) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}