#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    return arr[n] + sum(arr,n-1);
    
}
int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    cout<<sum(arr,n-1);
}