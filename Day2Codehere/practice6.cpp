#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n;
    
    int cnt[5] = {0}; 
    
    for(int i = 0; i < n; i++) {
        cin >> s;
        cnt[s]++; 
    }
    
    int taxis = cnt[4]; 
    
    taxis += cnt[3];
    if(cnt[1] > cnt[3]) {
        cnt[1] -= cnt[3];
    } else {
        cnt[1] = 0; 
    }
    
    taxis += cnt[2] / 2; 
    cnt[2] = cnt[2] % 2; 
    
    if(cnt[2] == 1) {
        taxis++; 
        if(cnt[1] > 0) {
            cnt[1] -= 2; 
            if(cnt[1] < 0) cnt[1] = 0;
        }
    }

    taxis += (cnt[1] + 3) / 4; 
    
    cout << taxis << endl;
    
    return 0;
}