#include<iostream>
using namespace std;

void shiftZero(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count+=1;
        }
    }
    while(count<n){
        arr[count]=0;
        count++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=10,arr[10]={3,2,0,5,7,0,6,1,0,4};
    shiftZero(arr,n);
}