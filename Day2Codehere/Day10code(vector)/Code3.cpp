#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> sorted_pos(n + 1);
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        for (int j = 0; j < n; j++) sorted_pos[sorted_a[j]] = j;
        
      
        int first_xor = (0) ^ (sorted_pos[a[0]] % 2);
        bool ok = true;
        for (int i = 1; i < n; i++) {
            int xorval = (i % 2) ^ (sorted_pos[a[i]] % 2);
            if (xorval != first_xor) { ok = false; break; }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
/*4
4
2 3 4 1
3
2 3 1
5
3 4 1 2 5
5
3 1 4 2 5
OutputCopy
YES
NO
YES
NO
*/