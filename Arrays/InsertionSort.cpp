
#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
}
int main(){
    int n =6;
    int arr[]={2,3,7,54,5,34};
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}