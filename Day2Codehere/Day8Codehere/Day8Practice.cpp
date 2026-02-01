#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int test_cases = 2;
    
    while(test_cases--) {
        int size1;
        cin >> size1;
        
        vector<int> arr1(size1);
        for(int i = 0; i < size1; i++) {
            cin >> arr1[i];
        }
        
        int size2;
        cin >> size2;
        
        vector<int> arr2(size2);
        for(int i = 0; i < size2; i++) {
            cin >> arr2[i];
        }
        
        if(size1 != size2) {
            cout << "No" << endl;
            continue;
        }
        
        bool isMatch = true;
        for(int i = 0; i < size1; i++) {
            if(arr1[i] != arr2[size1 - 1 - i]) {
                isMatch = false;
                break;
            }
        }
        
        if(isMatch) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}