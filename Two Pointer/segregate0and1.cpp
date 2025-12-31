#include<iostream>
#include<vector>
using namespace std;

void segregate0and1(int arr[], int n){
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]==0){
            low+=1;
        }
        else{
            if(arr[high]==0){
                swap(arr[low],arr[high]);
            }
            else{
                high-=1;
            }
        }
    }
}
int main(){
    int n=8, arr[100]={1,0,1,0,1,0,1,0};
    segregate0and1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}