#include<iostream>
using namespace std;

void insertPosition(int arr[],int n){
    int key,low=0,high=n-1,result=n,mid;
    cout<<"Enter the target Element: ";
    cin>>key;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            low=mid+1;
            result=low;
        }else if(arr[mid]<key){
            low=mid+1;
        }else{
            result=mid;
            high=mid-1;
        }
    }
    cout<<"Given Element inserted at index : "<<result;
}
int main(){
    int n=8,arr[100]={1,4,6,8,10,14,16,18};
    insertPosition(arr,n);
}