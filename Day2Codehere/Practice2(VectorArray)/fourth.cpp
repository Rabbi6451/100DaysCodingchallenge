#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int totalSubsets = 1 << n; 
    
    
    for (int i = 1; i < totalSubsets; i++) {
        std::cout << "{ ";
        
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                std::cout << nums[j] << " ";
            }
        }
        
        std::cout << "}";
    }
}