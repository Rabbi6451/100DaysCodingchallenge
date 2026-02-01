#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int min_index = 0, max_index = 0;
    
    for (int i = 1; i < N; i++) {
        if (A[i] < A[min_index]) {
            min_index = i;
        }
        if (A[i] > A[max_index]) {
            max_index = i;
        }
    }
    
    swap(A[min_index], A[max_index]);
    
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}