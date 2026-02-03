#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int ans = -1;          
    bool first = true;
    
    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        
        int cnt = 0;
        while(x % 2 == 0 && x != 0) {
            x /= 2;
            cnt++;
        }
        
        if(first) {
            ans = cnt;
            first = false;
        } else {
            if(cnt < ans) ans = cnt;
        }
    }
    
    cout << ans << endl;
}