#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
   
    vector<int> count(5, 0);
    
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        count[s]++;
    }
    
    int taxis = count[4];
    
    // Combine 3s with 1s
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);
    
    // Combine 2s with 2s
    taxis += count[2] / 2;
    
    // Handle odd 2s
    if (count[2] % 2 == 1) {
        taxis++;
        count[1] = max(0, count[1] - 2);
    }
    
    // Handle remaining 1s
    taxis += (count[1] + 3) / 4;
    
    cout << taxis << endl;
    
    return 0;
}