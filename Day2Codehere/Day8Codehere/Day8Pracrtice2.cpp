#include<iostream>
#include<vector>
using namespace std;

int main() {
    // First pair of arrays
    int n1, n2;
    
    // First array of the first pair
    cin >> n1;
    vector<int> arr1(n1);
    int sum1 = 0;
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    
    // Second array of the first pair
    cin >> n2;
    vector<int> arr2(n2);
    int sum2 = 0;
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    
    int firstPairSum = sum1 + sum2;
    
    // Second pair of arrays
    int m1, m2;
    
    // First array of the second pair
    cin >> m1;
    vector<int> arr3(m1);
    int sum3 = 0;
    for(int i = 0; i < m1; i++) {
        cin >> arr3[i];
        sum3 += arr3[i];
    }
    
    // Second array of the second pair
    cin >> m2;
    vector<int> arr4(m2);
    int sum4 = 0;
    for(int i = 0; i < m2; i++) {
        cin >> arr4[i];
        sum4 += arr4[i];
    }
    
    int secondPairSum = sum3 + sum4;
    
    // Compare the sums
    if(firstPairSum == secondPairSum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}