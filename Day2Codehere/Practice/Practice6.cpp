#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        long long tot = 0;
        for(int &x : a) cin >> x, tot += x;
        
        set<int> w;
        for(int s = 0; s < n; s++) {
            auto rem = a;
            int p = s;
            long long left = tot;
            while(left > 0) {
                while(rem[p] == 0) p = (p + 1) % n;
                rem[p]--;
                left--;
                if(left == 0) w.insert(p + 1);
                p = (p + 1) % n;
            }
        }
        cout << w.size() << '\n';
    }
}