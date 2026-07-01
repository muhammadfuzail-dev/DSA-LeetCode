class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0;
        int count1=0;
        int count2=0;
        int num=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else {
                count2++;
            }
        }
        for(int i=0;i<count0;i++){
            nums[num]=0;
            num++;
        }
        for(int i=0;i<count1;i++){
            nums[num]=1;
            num++;
        }
        for(int i=0;i<count2;i++){
            nums[num]=2;
            num++;
        }

    }
};