#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    int original_a = a, original_b = b, original_c = c;
    
    vector<int> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    
    cout << endl;
    
    cout << original_a << endl;
    cout << original_b << endl;
    cout << original_c << endl;
    
    return 0;
}