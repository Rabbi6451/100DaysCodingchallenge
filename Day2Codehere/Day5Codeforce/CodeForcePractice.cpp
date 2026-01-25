#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int num, max_num;
    cin >> max_num;  
    
    for(int i = 1; i < N; i++) {
        cin >> num;
        max_num = max(max_num, num);
    }
    
    cout << max_num << endl;
    
    return 0;
}