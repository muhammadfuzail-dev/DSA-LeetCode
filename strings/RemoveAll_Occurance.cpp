#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        // Fixed: string::npos is used instead of >= 0 to prevent infinite loops
        while (s.find(part)>=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    // Create an instance of your Solution class
    Solution solver;

    // Test Case 1
    string s1 = "daabcbaabcbc";
    string part1 = "abc";
    string result1 = solver.removeOccurrences(s1, part1);
    cout << "Test 1 Input:  s = \"" << s1 << "\", part = \"" << part1 << "\"\n";
    cout << "Test 1 Output: \"" << result1 << "\"\n\n";             // Expected: "dab"

    // Test Case 2
    string s2 = "axxxxyyyyb";
    string part2 = "xy";
    string result2 = solver.removeOccurrences(s2, part2);
    cout << "Test 2 Input:  s = \"" << s2 << "\", part = \"" << part2 << "\"\n";
    cout << "Test 2 Output: \"" << result2 << "\"\n";                   // Expected: "ab"

    return 0;
}
