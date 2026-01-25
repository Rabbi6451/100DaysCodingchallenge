#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin>>d;

        int first = d+1;
        int second = first;
        while (true) {
            if (second - first >= d) break;
            second++;
        }
        cout << 1LL * first * second << endl;
    }
    
    return 0;
}