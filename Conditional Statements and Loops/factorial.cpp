#include<iostream>
using namespace std;

int main(){
    int n,i,fact=1;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial is: "<<fact;
}