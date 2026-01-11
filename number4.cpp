#include <iostream>

int main() {
    int arr[5][5];
    int sum = 0;

    std::cout << "Please enter 25 integer numbers for the 5x5 array:\n";

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            sum += arr[i][j];
        }
    }
    std::cout << "\nThe sum of the elements in the 5x5 array is: " << sum << std::endl;

    return 0;
}
