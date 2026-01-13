#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int pos=low-1;
    for(int i=low;i<high;i++){
        if(arr[i]<pivot){
            pos++;
            swap(arr[pos],arr[i]);
        }
    }
    swap(arr[pos+1],arr[high]);
    return pos+1;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int idxPivot=partition(arr,low,high);
        quickSort(arr,low,idxPivot-1);
        quickSort(arr,idxPivot+1,high);
    }
}
int main(){
    int arr[100]={11,2,31,42,23,9,5,15};
    int n=8;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}