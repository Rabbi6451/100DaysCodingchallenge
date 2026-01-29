#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    bool found = false;
    
    for(int num = A; num <= B; num++) {
        int temp = num;
        bool isLucky = true;
        
        while(temp > 0) {
            int digit = temp % 10;
            if(digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            temp /= 10;
        }
        
        if(isLucky) {
            cout << num << " ";
            found = true;
        }
    }
    
    if(!found) {
        cout << -1;
    }
    
    return 0;
}