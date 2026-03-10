#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> t(a);
    for (int i = 0; i < a; i++) {
        cin >> t[i];
    }

    set<int> k(t.begin(), t.end());  

    cout << k.size();  
    return 0;
}   