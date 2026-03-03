#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    vector<int> dp(s2.length() + 1, 0);
    
    for (char c1 : s1) {
        int prev = 0;
        for (int j = 1; j <= s2.length(); j++) {
            int temp = dp[j];
            if (c1 == s2[j-1])
                dp[j] = prev + 1;
            else
                dp[j] = max(dp[j], dp[j-1]);
            prev = temp;
        }
    }
    
    cout << dp[s2.length()] << endl;
    return 0;
}