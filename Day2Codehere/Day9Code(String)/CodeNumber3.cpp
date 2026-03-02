#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> freq(m + 1, 0);
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }
    
    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }
    
    return 0;
}