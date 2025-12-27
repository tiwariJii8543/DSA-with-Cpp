#include<iostream>
using namespace std;

int min(int arr[], int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
void removeMin(int arr[],int n){
    int k=min(arr,n);
    for(int i=0;i<n-1;i++){
        if(k==arr[i]){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=6,arr[6]={32,3,55,64,78,5};
    removeMin(arr,n);
}
