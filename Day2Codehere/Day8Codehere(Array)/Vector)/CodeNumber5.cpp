#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> t(N);
        
        for (int i = 0; i < N; i++) {
            cin >> t[i];
        }
        
        vector<int> results;
        
        for (int start = 0; start < N; start++) {
            for (int end = start; end < N; end++) {
                int max_val = t[start];
                for (int k = start; k <= end; k++) {
                    if (t[k] > max_val) {
                        max_val = t[k];
                    }
                }
                results.push_back(max_val);
            }
        }
                for (int i = 0; i < results.size(); i++) {
            cout << results[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
input : 
2
4
1 6 3 7
3
3 1 2
output: 
1 6 3 7 6 6 7 6 7 7
3 3 3 1 2 2 
*/