#include <iostream>

using namespace std;

class Solution {
public:
    // Simple Recursive Approach: O(2^n) time
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution solver;
    
    // Test cases
    int testCases[] = {0, 1, 2, 3, 4, 9, 30};
    
    cout << "--- Fibonacci Test Results ---" << endl;
    for (int n : testCases) {
        cout << "n = " << n << " -> Fibonacci number is: " << solver.fib(n) << endl;
    }
    cout << "-----------------------------" << endl;

    return 0;
}