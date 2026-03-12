#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    unordered_set<char> digits;
    
    for (char digit : yearStr) {
        if (digits.count(digit) > 0) {
            return false; 
        }
        digits.insert(digit);
    }
    return true; 
}

int findNextYearWithDistinctDigits(int startYear) {
    int year = startYear + 1;
    
    while (!hasDistinctDigits(year)) {
        year++;
    }
    
    return year;
}

int main() {
    int inputYear;
    cin >> inputYear;
    
    int result = findNextYearWithDistinctDigits(inputYear);
    cout << result << endl;
    
    return 0;
}

