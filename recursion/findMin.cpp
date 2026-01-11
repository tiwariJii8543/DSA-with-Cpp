#include<iostream>
using namespace std;

int minElement(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    return min(arr[n],minElement(arr,n-1));
    
}
int main(){
    int arr[100]={11,32,14,5,7,9,45,10};
    int n=8;
    cout<<"min element is : "<<minElement(arr,n-1);
}