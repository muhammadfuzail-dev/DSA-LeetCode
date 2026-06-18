#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[nums.size() - 1] != nums[nums.size() - 2]) return nums[nums.size() - 1];
        
        int st = 0;
        int end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end - st) / 2;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]){
                return nums[mid];
            }

            
            if(mid % 2 == 0){
                if(nums[mid - 1] == nums[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            else{
                if(nums[mid - 1] == nums[mid]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution solver;
    
    // test array template
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    
    int result = solver.singleNonDuplicate(nums);
    
    cout << "The single non-duplicate element is: " << result << endl;
    
    return 0;
}
