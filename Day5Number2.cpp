#include <iostream>
using namespace std;

int main() {
    int numRows, numCols;
    cout << "Number of rows: ";
    cin >> numRows;
    cout << "Number of columns: ";
    cin >> numCols;

    int userArray[numRows][numCols];

    cout << "Please enter the elements:\n";
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> userArray[i][j];
        }
    }

    cout << "2D array:\n";
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << userArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}   ;