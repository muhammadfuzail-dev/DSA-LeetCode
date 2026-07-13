// Q1: Write a Program that can calculate the LCM and GCD of a number (Note use two separate 
// functions for this arrangement in a recursive manner no loops). 
#include <iostream>
using namespace std;
int Gcd(int n1,int n2){
    if(n2 ==0)return n1;
    return Gcd(n2,n1%n2);
}
int Lcm(int n1,int n2){
    int gcd=Gcd(n1,n2);
    if(gcd==0)return 0;
    return (n1*n2)/gcd;
}
int main(){
    int n1;
    int n2;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    
    int gcd=Gcd(n1,n2);
    cout<<"HCF of the given numers is: "<<gcd<<endl;
    cout<<endl;
    int lcm=Lcm(n1,n2);
    cout<<"LCM of the given numbers is : "<<lcm<<endl;
}