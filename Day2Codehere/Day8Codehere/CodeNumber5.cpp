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
        vector<int> arr(N);
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        vector<int> results;
        
        for (int start = 0; start < N; start++) {
            for (int end = start; end < N; end++) {
                int max_val = arr[start];
                for (int k = start; k <= end; k++) {
                    if (arr[k] > max_val) {
                        max_val = arr[k];
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