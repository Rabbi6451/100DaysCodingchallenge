#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) j++;
        i++;
    }
    
    cout << (j == m ? "Yes" : "No") << endl;
    cout<< j;
    return 0;
}