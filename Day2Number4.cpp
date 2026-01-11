#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    bool allUpperExceptFirst = true;

        for (size_t i = 1; i < word.length(); i++) {
        if (islower(static_cast<unsigned char>(word[i]))) {
            allUpperExceptFirst = false;
            break;
        }
    }
        if (allUpperExceptFirst) {
        if (isupper(static_cast<unsigned char>(word[0]))) {
            word[0] = static_cast<char>(tolower(static_cast<unsigned char>(word[0])));
        } else {
            word[0] = static_cast<char>(toupper(static_cast<unsigned char>(word[0])));
        }
                for (size_t i = 1; i < word.length(); i++) {
            word[i] = static_cast<char>(tolower(static_cast<unsigned char>(word[i])));
        }
    }
    
    cout << word << endl;
    return 0;
}