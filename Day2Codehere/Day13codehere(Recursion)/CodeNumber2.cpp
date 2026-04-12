#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<string> inputs(n);

    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < inputs[i].size(); j++) {
            cout << inputs[i][j];
            if (j != inputs[i].size() - 1) cout << " ";
        }
        cout << "\n";
    }
}


