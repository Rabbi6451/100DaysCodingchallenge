#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> B(N);
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    if(A == B) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}
/*
Input :
4
4 2 3 7
2 3 4 9
output :
No
Input :
5
5 1 1 9 3
1 9 1 5 3
Output :
Yes
*/