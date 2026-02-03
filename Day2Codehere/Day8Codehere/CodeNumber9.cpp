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
        
        long long ans = 0;
        int len = 1;           
        
        for (int i = 1; i < N; i++) {
            if (A[i] >= A[i-1]) {
                len++;
            } else {
               
                ans += (len * 1LL * (len + 1)) / 2;
                len = 1;
            }
        }
        
      
        ans += (len * 1LL * (len + 1)) / 2;
        
        cout << ans << endl;
    }
    
    return 0;
}