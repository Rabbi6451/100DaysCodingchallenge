#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N + 1);
        
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }
        
        int min_ai_minus_i = A[1] - 1;
        int answer = INT_MAX;
        
        for (int j = 2; j <= N; j++) {
            int candidate = min_ai_minus_i + A[j] + j;
            if (candidate < answer) {
                answer = candidate;
            }
            if (A[j] - j < min_ai_minus_i) {
                min_ai_minus_i = A[j] - j;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}