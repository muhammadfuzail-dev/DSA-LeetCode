#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==0||n==1)return true;
    if(arr[n-1]<arr[n-2])return false;
    return isSorted(arr, n-1);
}
int main(){
    int n=5;
    int arr[n]={1,2,6,4,5};
    cout<<isSorted(arr,n)<<endl;
    return 0;

}