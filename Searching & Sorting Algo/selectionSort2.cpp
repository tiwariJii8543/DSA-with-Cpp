#include<iostream>
using namespace std;

//decending order
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[100]={3,5,0,7,1,4};
    int n=6;
    selectionSort(arr,n);
}