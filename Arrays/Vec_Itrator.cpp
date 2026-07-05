#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=nums.begin();it!=nums.end();it++){
        cout<<*(it) << " " ;
    }
    cout<<endl;
    for(auto it=nums.rbegin();it!=nums.rend();it++){
        cout<<*(it) << " " ;
    }
    cout<<endl;
    return 0;
}