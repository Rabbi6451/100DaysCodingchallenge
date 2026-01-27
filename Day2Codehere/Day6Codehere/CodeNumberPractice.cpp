#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a;
    cin >> a;
    string rev = a;
    reverse(rev.begin(), rev.end());
    size_t start = rev.find_first_not_of('0');
    if (start == string::npos) {
        rev = "0";
    } else {
        rev = rev.substr(start);
    }
    cout << rev << endl;
    if (a == rev) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}   