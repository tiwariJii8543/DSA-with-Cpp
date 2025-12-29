//Finding minimum element in rotated sorted array.......

#include<iostream>
using namespace std;

void min(int arr[],int n){
    int low=0,high=n-1,mid,ans=arr[0];
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[0]<arr[mid]){
            low=mid+1;
        }else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<"min element is found at index: "<<ans;
}
int main(){
    int n=8,arr[100]={8,9,2,3,4,5,6,7};
    min(arr,n);
}