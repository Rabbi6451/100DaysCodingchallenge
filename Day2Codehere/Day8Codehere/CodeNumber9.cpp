#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<long long> A(N);   // using long long to be safe
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        long long answer = 0;
        
        // For each possible starting index
        for (int i = 0; i < N; i++) {
            // At least the single element is always non-decreasing
            answer++;  
            
            // Try to extend to the right
            for (int j = i + 1; j < N; j++) {
                if (A[j] >= A[j-1]) {
                    answer++;        // [i...j] is good
                } else {
                    break;           // cannot extend anymore
                }
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}