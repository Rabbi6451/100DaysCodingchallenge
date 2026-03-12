#include <iostream>
using namespace std;

bool hasDistinctDigits(int year) {
    int seen = 0; 
    
    while (year > 0) {
        int digit = year % 10;
        if (seen & (1 << digit)) return false;
        seen |= (1 << digit);
        year /= 10;
    }
    return true;
}

int main() {
    int y; cin >> y;
    while (!hasDistinctDigits(++y));
    cout << y;
    return 0;
}