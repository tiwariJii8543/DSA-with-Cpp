#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0,sq;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=0;i<=n;i++){
        sq=i*i;
        sum=sum+sq;
    }
    cout<<"summation of squares is: "<<sum;
}    
