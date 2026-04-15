#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n = 5791;

    while (n > 0) {
        int rim = n % 10;  
        count = count + rim;      
        n /= 10;         
    }


    cout << count;
    return 0;
}
