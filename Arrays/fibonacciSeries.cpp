#include<iostream>
using namespace std;

void fibonacciNum(int arr[],int n){
    int k;
    cout<<"Enter index:";
    cin>>k;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[k-1];
}
int main(){
    int n=10,arr[10];
    fibonacciNum(arr,n);
}