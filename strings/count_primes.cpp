#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool> isprime(n+1,true);
        for(int i=2;i<n;i++){
            if(isprime[i]){
                count++;
                for(int j=i*2;j<n;j+=i){   // fixed: j+i -> j+=i
                    isprime[j]=false;
                }
            }
            
        }
        return count;
    }
};

int main(){
    Solution sol;
    cout << sol.countPrimes(10) << endl;  // 4  (2,3,5,7)
    cout << sol.countPrimes(0) << endl;   // 0
    cout << sol.countPrimes(1) << endl;   // 0
    cout << sol.countPrimes(20) << endl;  // 8  (2,3,5,7,11,13,17,19)
    return 0;
}