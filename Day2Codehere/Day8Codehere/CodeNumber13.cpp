#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int matrix[100][100];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int primaryDiagonal = 0;
    for (int i = 0; i < N; i++) {
        primaryDiagonal += matrix[i][i];
    }
    
    int secondaryDiagonal = 0;
    for (int i = 0; i < N; i++) {
        secondaryDiagonal += matrix[i][N - 1 - i];
    }
    
    int difference = primaryDiagonal - secondaryDiagonal;
    if (difference < 0) {
        difference = -difference;  

    }
    
    cout << difference << endl;
    
    return 0;
}
/*
Input :
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
Output :
22 
Summation.
*/