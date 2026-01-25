#include <iostream>
#include <string>
using namespace std;

bool divisible(const string &s, const string &t) {
    if (s.length() % t.length() != 0) return false;
    
    int repeat = s.length() / t.length();
    string constructed = "";
    for (int i = 0; i < repeat; i++) {
        constructed += t;
    }
    return constructed == s;
}
int main() {
    int q;
    cin >> q;
    
    while (q--) {
        string s, t;
        cin >> s >> t;
        
        int len1 = s.length();
        int len2 = t.length();
        
        int a = len1, b = len2;
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = a;
        
        int lcm_len = (len1 / gcd) * len2;
        
        string candidate_s = "";
        int repeat_s = lcm_len / len1;
        for (int i = 0; i < repeat_s; i++) {
            candidate_s += s;
        }
        
        string candidate_t = "";
        int repeat_t = lcm_len / len2;
        for (int i = 0; i < repeat_t; i++) {
            candidate_t += t;
        }
        
        if (candidate_s == candidate_t) {
            cout << candidate_s << endl;
        } else {
            cout << -1 << endl;
        }
    }
}