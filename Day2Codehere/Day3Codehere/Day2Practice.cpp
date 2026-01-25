#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;  
    cin >> n;
    vector<int> t(n); 
    for (int i = 0; i < n; i++) cin >> t[i];
    
    if (n < 3) {
        cout << "NO" << endl;
        return 0;
    }
    
    sort(t.begin(), t.end());
    
    for (int i = 0; i + 2 < n; i++) {
        if (t[i] + 2 >= t[i + 2]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}