#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int temp[100];
    int i=low;        // Pointer for the left half (low to mid)
    int j=mid + 1;    // Pointer for the right half (mid + 1 to high)
    int k=0;          // Pointer for the temporary array
    while(i<=mid && j<=high){
        if (arr[i]<=arr[j]) {
            temp[k]=arr[i];
            i++;
        }else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int idx=0;idx<k;idx++){
        arr[low+idx]=temp[idx];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int arr[100]={10,12,8,7,4,9};
    int low=0,high=5;
    mergeSort(arr,low,high);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}