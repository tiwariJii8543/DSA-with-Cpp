#include<iostream>
using namespace std;
 
int countFreq(int arr[],int n,int k){
    int count =0;
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            count+=1;
        }
    }
    return count;
}

int main(){
    int n=6,arr[n]={2,4,5,2,6,2},k;
    cout<<"enter the element whose frequency is to be count:";
    cin>>k;
    cout<<countFreq(arr,n,k);
}