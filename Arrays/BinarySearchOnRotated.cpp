#include <stdio.h>

// Your original logic and variable names completely unchanged
int search(int* nums, int numsSize, int target) {
    int st=0;
    int end =numsSize-1; // Changed to numsSize to match C array handling
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]){
            if(nums[st]<=target && target<=nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }

        }
        else{
            if(nums[mid]<=target && target <= nums[end]){
                st=mid+1;
                
            }
            else{
                end=mid-1;
            }
        }

    }
    return -1;
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    
    int result = search(nums, numsSize, target);
    printf("Result index: %d\n", result);
    
    return 0;
}