#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> inputs(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];
    }
    
    for (int n : inputs) {
        long long factorial = 1;
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}   