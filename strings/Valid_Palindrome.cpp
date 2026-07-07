#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size() - 1;
        while (st < end) {
            if (!isalnum(s[st])) {
                st++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) return false;
            st++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    
    string s = "A man, a plan, a canal: Panama";
    
    if (sol.isPalindrome(s)) {
        cout << "\"" << s << "\" is a palindrome" << endl;
    } else {
        cout << "\"" << s << "\" is NOT a palindrome" << endl;
    }
    
    return 0;
}