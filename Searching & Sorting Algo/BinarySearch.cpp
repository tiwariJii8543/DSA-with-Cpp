#include<iostream>
using namespace std;

int binarySearch(int arr[],int n){
    int start=0,end=n-1,mid,key;
    cout<<"enter the element to search: ";
    cin>>key;
    
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        } else if (arr[mid] > key) {
            end = mid-1;
        } else {
            start = mid+1;
        }
    }
    return 0;
}

int main(){
    int n=8,arr[100]={3,5,6,8,9,12,15,18};
    int index=binarySearch(arr,n);
    if(index!=0){
        cout<<"element found at index "<<index;
    }else{
        cout<<"Not Found!";
    }
}
