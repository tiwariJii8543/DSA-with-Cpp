#include<iostream>
using namespace std;

int search(int arr[],int idx,int n,int key){
    if(idx==n){
        return -1;
    }
    if(arr[idx]==key){
        return idx;
    }
    return search(arr,idx+1,n,key);
}
int main(){
    int arr[100]={11,22,12,43,12,23,32};
    int n=7,key=0;
    int index=search(arr,0,n,key);
    if(index!=-1){
        cout<<"found at index: "<<index;
    }else{
        cout<<"not found";
    }
}