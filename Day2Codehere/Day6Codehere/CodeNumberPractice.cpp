#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a;
    cin >> a;

    string reversed = a;
    reverse(reversed.begin(), reversed.end());
    
    size_t start = reversed.find_first_not_of('0');
    if (start == string::npos) { 
        reversed = "0";
    } else {
        reversed = reversed.substr(start);
    }

    cout << reversed << endl;
    if (a == string(reversed.rbegin(), reversed.rend())) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}   