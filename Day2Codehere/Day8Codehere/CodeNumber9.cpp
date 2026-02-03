#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<long long> A(N);  
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        long long answer = 0;
        
        for (int i = 0; i < N; i++) {
           
            answer++;  
            
            
            for (int j = i + 1; j < N; j++) {
                if (A[j] >= A[j-1]) {
                    answer++;     
                } else {
                    break;           
                }
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}