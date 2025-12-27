#include<iostream>
using namespace std;

void rotateLeft1(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[5]=k;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=6,arr[n]={3,4,2,5,1,6};
    rotateLeft1(arr,n);
}