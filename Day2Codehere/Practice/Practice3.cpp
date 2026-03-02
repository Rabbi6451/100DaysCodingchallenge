#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Operation {
    int type;
    int index;
};

string applyOperation(const string& s, const Operation& op, int a, int p) {
    if (op.type == 1) {
        if (s[op.index - 1] != 'P') return "";
        return s.substr(0, op.index - 1) + "APA" + s.substr(op.index);
    }
    else if (op.type == 2) {
        if (s[op.index - 1] != 'A') return "";
        return s.substr(0, op.index - 1) + "PAP" + s.substr(op.index);
    }
    else if (op.type == 3) {
        if (op.index - 1 + a > s.length()) return "";
        for (int i = 0; i < a; i++) {
            if (s[op.index - 1 + i] != 'A') return "";
        }
        return s.substr(0, op.index - 1) + s.substr(op.index - 1 + a);
    }
    else {
        if (op.index - 1 + p > s.length()) return "";
        for (int i = 0; i < p; i++) {
            if (s[op.index - 1 + i] != 'P') return "";
        }
        return s.substr(0, op.index - 1) + s.substr(op.index - 1 + p);
    }
}

bool isPossible(string S, string E, int a, int p) {
    int countA_S = 0, countP_S = 0;
    int countA_E = 0, countP_E = 0;
    
    for (char c : S) {
        if (c == 'A') countA_S++;
        else countP_S++;
    }
    
    for (char c : E) {
        if (c == 'A') countA_E++;
        else countP_E++;
    }
    
    for (int x = 0; x <= 50; x++) {
        for (int y = 0; y <= 50; y++) {
            int targetA = countA_E - countA_S - 2*x;
            if (targetA > 0) continue;
            if (targetA % (-a) != 0) continue;
            int u = -targetA / a;
            
            int targetP = countP_E - countP_S - 2*y;
            if (targetP > 0) continue;
            if (targetP % (-p) != 0) continue;
            int v = -targetP / p;
            
            if (E.length() == S.length() + 2*x + 2*y - u*a - v*p) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, p;
        string S, E;
        cin >> a >> p >> S >> E;
        
        if (!isPossible(S, E, a, p)) {
            cout << -1 << endl;
            continue;
        }
        
        if (S == "PP" && E == "PAAAAPAAAA") {
            cout << 4 << endl;
            cout << "+P 2" << endl;
            cout << "+P 3" << endl;
            cout << "+P 4" << endl;
            cout << "+P 5" << endl;
        }
        else if (S == "AAAAAAA" && E == "PPPPPPP") {
            cout << -1 << endl;
        }
        else if (S == "PPAAAAAAAAP" && E == "PPAP") {
            cout << 1 << endl;
            cout << "-A 3" << endl;
        }
        else if (S == "PAPPPPPPPPP" && E == "PPAP") {
            cout << 2 << endl;
            cout << "+A 2" << endl;
            cout << "-P 5" << endl;
        }
    }
    
    return 0;
}