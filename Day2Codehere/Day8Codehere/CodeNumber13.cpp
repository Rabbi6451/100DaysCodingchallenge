#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int matrix[100][100];
    
    // Read matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int primaryDiagonal = 0;
    // Primary diagonal: row = column
    for (int i = 0; i < N; i++) {
        primaryDiagonal += matrix[i][i];
    }
    
    int secondaryDiagonal = 0;
    // Secondary diagonal: row + column = N-1
    for (int i = 0; i < N; i++) {
        secondaryDiagonal += matrix[i][N - 1 - i];
    }
    
    // Calculate absolute difference
    int difference = primaryDiagonal - secondaryDiagonal;
    if (difference < 0) {
        difference = -difference;  // Make it positive
    }
    
    cout << difference << endl;
    
    return 0;
}