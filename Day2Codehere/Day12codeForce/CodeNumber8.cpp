#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long num;
        cin >> num;

        if (num == 0) {
            cout << "0";
        } else {
            int digits[10];
            int count = 0;
            while (num > 0) {
                digits[count++] = num % 10;
                num /= 10;
            }
            for (int i = count - 1; i >= 0; i--) {
                cout << digits[i];
                if (i > 0) cout << " ";
            }
        }
        cout<<endl;
    }
}   