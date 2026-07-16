#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int st, int end) {
        if (st > end) return -1;
        
        int mid = st + (end - st) / 2;
        
        if (target == nums[mid]) return mid;
        if (target < nums[mid]) return binarySearch(nums, target, st, mid - 1);
        if (target > nums[mid]) return binarySearch(nums, target, mid + 1, end);
        
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        return binarySearch(nums, target, st, end);
    }
};

int main() {
    Solution solver;
    
    // Test Case 1: Target exists in the array
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    int result1 = solver.search(nums1, target1);
    cout << "Test 1 -> Target " << target1 << " found at index: " << result1 << endl; // Expected: 4

    // Test Case 2: Target does not exist in the array
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    int result2 = solver.search(nums2, target2);
    cout << "Test 2 -> Target " << target2 << " found at index: " << result2 << endl; // Expected: -1

    return 0;
}