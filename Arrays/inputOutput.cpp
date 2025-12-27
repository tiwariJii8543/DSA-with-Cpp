#include<iostream>
using namespace std;

int main(){
    int n, i, arr[n];
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
