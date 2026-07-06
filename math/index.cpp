#include <iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(23);
    l.push_front(12);
    l.push_front(12);
    l.push_front(15);
    l.push_front(34);

    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<" "<<val;
    }
    cout<<endl;
}