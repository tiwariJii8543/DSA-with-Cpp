#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    if(n<0){
        return;
    }
    printArr(arr,n-1);
    cout<<arr[n]<<" ";
}
int main(){
    int arr[100]={1,2,3,4,5,6,7,8};
    int n=8;
    printArr(arr,n-1);
}