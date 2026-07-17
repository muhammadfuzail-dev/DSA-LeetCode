#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<vector<int>> result;    
    void print_sub(vector<int>& nums,vector<int>& ans,int i ) {
        if(i>=nums.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        print_sub(nums,ans,i+1);
        ans.pop_back();
        print_sub(nums,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear();
        vector<int>ans;

        print_sub(nums,ans,0);
        return result;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = sol.subsets(nums);

    cout << "Total subsets: " << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << "{ ";
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}