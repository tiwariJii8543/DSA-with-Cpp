#include<iostream>
using namespace std;

void secMax(int arr[],int n){
    int max=0;
    int secMax=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max){
            if(secMax<arr[i]){
                secMax=arr[i];
            }
        }
    }
    cout<<secMax;
}
int main(){
    int n=7;
    int arr[n]={2,6,4,3,8,5,7};
    secMax(arr,n);
}