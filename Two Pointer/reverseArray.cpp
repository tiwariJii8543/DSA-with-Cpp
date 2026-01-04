#include<iostream>
using namespace std;

void reverseArr(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low+=1;
        high-=1;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=8, arr[100]={1,2,3,4,5,6,7,8};
    reverseArr(arr,n);
}