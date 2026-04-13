#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(string s, int idx) {
    if (idx == s.size()) return 0;

    int add = isVowel(s[idx]) ? 1 : 0;
    return add + countVowels(s, idx + 1);
}

int main() {
    string s;
    getline(cin, s); 

    cout << countVowels(s, 0) << endl;
}
