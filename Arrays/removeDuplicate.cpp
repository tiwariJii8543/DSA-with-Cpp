#include<iostream>
using namespace std;
 
void remDupli(int arr[],int n){
    int temp[100];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    temp[j]=arr[j];
                    arr[j]=arr[j+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=10,arr[n]={2,4,5,6,9,7,7,8,6,2};
    remDupli(arr,n);
}
