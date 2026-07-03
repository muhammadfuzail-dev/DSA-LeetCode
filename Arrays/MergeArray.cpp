#include <iostream>
#include <vector>

using namespace std;

class Solution { 
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        
        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[idx--] = nums2[j--];
            } else {
                nums1[idx--] = nums1[i--]; 
            }
        }
        
        while (j >= 0) {
            nums1[idx--] = nums2[j--]; 
        }
    }
};

int main() {
    Solution solution;

    // Test Case: nums1 has extra space (zeros) at the end to hold nums2
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    int m = 3; // Number of actual elements in nums1
    
    vector<int> nums2 = {2, 5, 6};
    int n = 3; // Number of elements in nums2

    // Call the merge function
    solution.merge(nums1, m, nums2, n);

    // Print the merged array
    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
