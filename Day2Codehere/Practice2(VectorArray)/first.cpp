#include <iostream>
#include <vector>
using namespace std;

bool isSubsequence(const vector<int>& A, const vector<int>& B) {
    int i = 0, j = 0;
    int n = A.size(), m = B.size();
    
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            j++; 
        }
        i++; 
    }
    
    return (j == m);
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N), B(M);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    if (isSubsequence(A, B)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}