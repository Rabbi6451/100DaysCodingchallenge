#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> t(n);
    
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }
    
    bool isPalindrome = true;
    for(int i = 0; i < n / 2; i++) {
        if(t[i] != t[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if(isPalindrome) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}