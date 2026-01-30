#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int minVal = INT_MAX;
    int minPos = -1;
     
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        if(num < minVal) {
            minVal = num;
            minPos = i + 1; 
        }
    }
    
    cout << minVal << " " << minPos << endl;
    
    return 0;
}