#include <iostream>
#include <vector>
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
        
        long long count = 0;
        
        for (int i = 0; i < N; i++) {
            int j = i;
            while (j < N - 1 && arr[j] <= arr[j + 1]) {
                j++;
            }
            
            int len = j - i + 1;
            count += len;
        } 
        cout << count << endl;
    }
 }