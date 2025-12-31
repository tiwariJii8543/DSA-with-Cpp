#include<iostream>
#include<vector>
using namespace std;

int twoSum(int arr[], int n){
    int low=0,high=n-1,target;
    cout<<"enter the sum: ";
    cin>>target;
    while(low<high){
        if(arr[low]+arr[high]==target){
            return 1;
        }
        else if(arr[low]+arr[high]>target){
            high-=1;
        }
        else{
            low+=1;
        }
    }
   return 0;
}
int main(){
    int n=8, arr[100]={1,3,5,7,9,12,14,18};
    int index=twoSum(arr,n);
    if(index==1){
        cout<<"two sum found!!";
    }else{
        cout<<"not found!!";
    }
}