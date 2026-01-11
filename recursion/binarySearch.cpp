#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int low,int high,int key){
    int mid=low+(high-low)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]>key){
        high=mid-1;
        return binarySearch(arr,n,low,high,key);
    }else{
        low=mid+1;
        return binarySearch(arr,n,low,high,key);
    }
}
int main(){
    int arr[100]={11,12,22,34,43,52};
    int n=6,low=0,high=n-1,key=11;
    int index=binarySearch(arr,n,low,high,key);
    if(index!=-1){
        cout<<"found at index: "<<index;
    }else{
        cout<<"not found";
    }
}
