#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int row=0;
        int col=n-1;
        while(row<m&&col>=0){
            if(mat[row][col]==target)return true;
            else if(mat[row][col]>=target)col--;
            else row++;
        }
        return false;
    }
};

int main(){
    Solution sol;

    vector<vector<int>> mat1 = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10,13,14,17, 24},
        {18,21,23,26, 30}
    };

    cout << boolalpha;
    cout << "Search 5  -> " << sol.searchMatrix(mat1, 5) << endl;   // true
    cout << "Search 20 -> " << sol.searchMatrix(mat1, 20) << endl;  // false
    cout << "Search 30 -> " << sol.searchMatrix(mat1, 30) << endl;  // true (last element)
    cout << "Search 1  -> " << sol.searchMatrix(mat1, 1) << endl;   // true (first element)

    vector<vector<int>> mat2 = {{-5}};
    cout << "Search -5 -> " << sol.searchMatrix(mat2, -5) << endl;  // true (single element)

    return 0;
}