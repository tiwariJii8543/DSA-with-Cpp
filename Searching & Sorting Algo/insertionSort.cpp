#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=6,arr[100]={2,6,4,7,3,8};
    insertionSort(arr,n);
}