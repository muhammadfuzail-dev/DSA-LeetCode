#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {

public:
    int compress(vector<char>& chars) {
            int idx=0;
            int n=chars.size();
            for(int i=0;i<n;){
                char ch=chars[i];
                int count=0;
                while(i<n&&chars[i]==ch){
                    count++;
                    i++;
                }
                chars[idx]=ch;
                idx++;


                if(count==1){
                    continue;
                }


                
                string str=to_string(count);
                for(auto digit:str){
                    chars[idx]=digit;
                    idx++;
                }
            }
            return idx;
    }
};

int main(){
    Solution sol;



    vector<char> chars1 = {'a','a','b','b','c','c','c'};
    vector<char> chars2 = {'a'};
    vector<char> chars3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};




    int len1 = sol.compress(chars1);
    cout << "Length: " << len1 << " -> ";
    for(int i=0;i<len1;i++) cout << chars1[i];
    cout << endl; 





    int len2 = sol.compress(chars2);
    cout << "Length: " << len2 << " -> ";
    for(int i=0;i<len2;i++) cout << chars2[i];
    cout << endl;  //Length:1  -> a




    int len3 = sol.compress(chars3);
    cout << "Length: " << len3 << " -> ";
    for(int i=0;i<len3;i++) cout << chars3[i];
    cout << endl;  // Length: 4-> ab12
    return 0;

}