#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, w;
        cin >> n >> w;
        
        long long full_blocks = n / w; //(9/3=3)
        long long remainder = n % w; //(9%3=0)
        
        long long max_removed = full_blocks * (w - 1); //3*(3-1) = 6
        
        if (remainder > 0) {
            max_removed += (remainder );
        }
        
        cout << max_removed << endl;
    }
    
    return 0;
}