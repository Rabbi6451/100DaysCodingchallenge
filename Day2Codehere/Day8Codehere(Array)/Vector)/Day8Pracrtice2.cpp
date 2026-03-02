#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n1, n2;
    
    cin >> n1;
    vector<int> arr1(n1);
    int sum1 = 0;
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    
    cin >> n2;
    vector<int> arr2(n2);
    int sum2 = 0;
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    
    int firstPairSum = sum1 + sum2;
    
    int m1, m2;
    
    cin >> m1;
    vector<int> arr3(m1);
    int sum3 = 0;
    for(int i = 0; i < m1; i++) {
        cin >> arr3[i];
        sum3 += arr3[i];
    }
    
    cin >> m2;
    vector<int> arr4(m2);
    int sum4 = 0;
    for(int i = 0; i < m2; i++) {
        cin >> arr4[i];
        sum4 += arr4[i];
    }
    
    int secondPairSum = sum3 + sum4;
    
    if(firstPairSum == secondPairSum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}