#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> result;
        int stRow=0;
        int endRow=mat.size()-1;
        int stCol=0;
        int endCol=mat[0].size()-1;

        while(stRow<=endRow && stCol<=endCol){

            // top row: left -> right
            for(int i=stCol;i<=endCol;i++){
                result.push_back(mat[stRow][i]);
            }
            stRow++;

            // right column: top -> bottom
            if(stRow>endRow) break;   // ✅ break instead of if-wrap
            for(int i=stRow;i<=endRow;i++){
                result.push_back(mat[i][endCol]);
            }
            endCol--;

            // bottom row: right -> left
            if(stCol>endCol) break;   // ✅ break instead of if-wrap
            for(int i=endCol;i>=stCol;i--){
                result.push_back(mat[endRow][i]);
            }
            endRow--;

            // left column: bottom -> top
            if(stRow>endRow) break;   // ✅ break instead of if-wrap
            for(int i=endRow;i>=stRow;i--){
                result.push_back(mat[i][stCol]);
            }
            stCol++;
        }
        return result;
    }
};

int main(){
    Solution sol;

    auto printResult = [](vector<int>& res){
        cout << "[ ";
        for(int x : res) cout << x << " ";
        cout << "]" << endl;
    };

    // Square matrix 3x3
    vector<vector<int>> mat1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int> res1 = sol.spiralOrder(mat1);
    cout << "3x3 square -> ";
    printResult(res1);   // [ 1 2 3 6 9 8 7 4 5 ]

    // Rectangular matrix 3x4
    vector<vector<int>> mat2 = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    vector<int> res2 = sol.spiralOrder(mat2);
    cout << "3x4 rectangle -> ";
    printResult(res2);   // [ 1 2 3 4 8 12 11 10 9 5 6 7 ]

    // Single row
    vector<vector<int>> mat3 = {{1,2,3,4}};
    vector<int> res3 = sol.spiralOrder(mat3);
    cout << "1x4 single row -> ";
    printResult(res3);   // [ 1 2 3 4 ]

    // Single column
    vector<vector<int>> mat4 = {{1},{2},{3},{4}};
    vector<int> res4 = sol.spiralOrder(mat4);
    cout << "4x1 single column -> ";
    printResult(res4);   // [ 1 2 3 4 ]

    // Single element
    vector<vector<int>> mat5 = {{42}};
    vector<int> res5 = sol.spiralOrder(mat5);
    cout << "1x1 single element -> ";
    printResult(res5);   // [ 42 ]

    return 0;
}