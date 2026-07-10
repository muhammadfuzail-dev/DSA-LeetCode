#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.length();i++){
            while(i<s.length()&&s[i]==' '){
                i++;
            }
            string word="";
            while(i<s.length()&&s[i]!=' '){
                word+=s[i];
                i++;
                
            }
            if(word.length()>0){
                reverse(word.begin(),word.end());
                if(ans.length()>0){
                    ans+=" "+word;
                }
                else{
                    ans+=word;
                }
            }
            
        }
        return ans;

    }
};

int main(){
    Solution sol;

    // test cases
    string s1 = "the sky is blue";
    string s2 = "  hello world  ";
    string s3 = "a good   example";

    cout << "\"" << sol.reverseWords(s1) << "\"" << endl;  // "blue is sky the"
    cout << "\"" << sol.reverseWords(s2) << "\"" << endl;  // "world hello"
    cout << "\"" << sol.reverseWords(s3) << "\"" << endl;  // "example good a"

    return 0;
}