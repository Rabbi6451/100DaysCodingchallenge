#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int arr[100][100];
    
    // Read the array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    
    int X;
    cin >> X;
    
    // Search for X
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == X) {
                cout << "will not take number" << endl;
                return 0;  // Exit early if found
            }
        }
    }
    
    // If we reach here, X was not found
    cout << "will take number" << endl;
    
    return 0;
}