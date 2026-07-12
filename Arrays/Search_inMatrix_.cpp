#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    bool RowSearch(vector<vector<int>>& matrix, int target ,int n,int midRow){
        int st=0;
        int end=n-1;
        int mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(matrix[midRow][mid]==target){
                return true;
            }
            else if(target<matrix[midRow][mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int midRow;
        int stRow=0;
        int endRow=m-1;
        while(stRow<=endRow){
            midRow=stRow+(endRow-stRow)/2;
            if(matrix[midRow][0]<=target&&matrix[midRow][n-1]>=target){
                return RowSearch(matrix,target,n,midRow);
            }
            else if(target<matrix[midRow][0]){
                endRow = midRow -1;
            }
            else{
                stRow=midRow+1;
            }

        }
        return false;
        
    }
};

int main(){
    Solution sol;
    cout << boolalpha;

    // Normal matrix
    vector<vector<int>> mat1 = {
        {1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    cout << "Search 3  -> " << sol.searchMatrix(mat1, 3)  << endl; // true
    cout << "Search 13 -> " << sol.searchMatrix(mat1, 13) << endl; // false
    cout << "Search 1  -> " << sol.searchMatrix(mat1, 1)  << endl; // true (first element overall)
    cout << "Search 60 -> " << sol.searchMatrix(mat1, 60) << endl; // true (last element overall)
    cout << "Search 23 -> " << sol.searchMatrix(mat1, 23) << endl; // true (first element of last row)
    cout << "Search 7  -> " << sol.searchMatrix(mat1, 7)  << endl; // true (last element of first row)

    // Single row
    vector<vector<int>> mat2 = {{1, 2, 3, 4, 5}};
    cout << "Search 4  -> " << sol.searchMatrix(mat2, 4)  << endl; // true
    cout << "Search 6  -> " << sol.searchMatrix(mat2, 6)  << endl; // false

    // Single column
    vector<vector<int>> mat3 = {{1}, {3}, {5}, {7}};
    cout << "Search 5  -> " << sol.searchMatrix(mat3, 5)  << endl; // true
    cout << "Search 2  -> " << sol.searchMatrix(mat3, 2)  << endl; // false

    // Single element
    vector<vector<int>> mat4 = {{42}};
    cout << "Search 42 -> " << sol.searchMatrix(mat4, 42) << endl; // true
    cout << "Search 0  -> " << sol.searchMatrix(mat4, 0)  << endl; // false

    return 0;
}