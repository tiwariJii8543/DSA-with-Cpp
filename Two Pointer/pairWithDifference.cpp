#include<iostream>
#include<vector>
using namespace std;

int twoSum(int arr[], int n){
    int low=0,high=1,target;
    cout<<"enter the sum: ";
    cin>>target;
    while(low<high){
        if(arr[high]-arr[low]==target){
            return 1;
        }
        else if(arr[high]-arr[low]>target){
            low+=1;
        }
        else{
            high+=1;
        }
    }
   return 0;
}
int main(){
    int n=8, arr[100]={1,3,5,6,9,12,11,18};
    int index=twoSum(arr,n);
    if(index==1){
        cout<<"Diffrence found!!";
    }else{
        cout<<"not found!!";
    }
}