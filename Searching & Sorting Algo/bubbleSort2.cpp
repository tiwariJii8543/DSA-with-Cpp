#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int index=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                index++;           
            }
        }
        if(index==0){
            cout<<"array already sorted:";
            break;
        }
    }
}
int main(){
    int n,arr[100];
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: "<<endl; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after Sorting in descending order: "<<endl;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}