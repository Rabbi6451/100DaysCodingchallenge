#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<int> v1;
    
    vector<int> v2(3, 5);  
    
    for (int x : v2) {
        cout << x << " ";
    }
    
    cout << endl;
    
    vector<int> v3 = {1, 2, 3};  
    
    for (int x : v3) {
        cout << x << " ";
    }
    
}