#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int last =height.size()-1;
        int first =0;
        int maxArea=0;
        int w;
        int h;
        while(first<last){
            h=min(height[first],height[last]);
            w=last-first;
            maxArea=max(maxArea,(h*w));
            if(height[first]<height[last])
            first++;
            else
            last--;
        }
        return maxArea;
    }
};

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    Solution sol;
    int result = sol.maxArea(height);
    
    cout << "Max Area: " << result << endl;
    
    return 0;
}