#include<iostream>
using namespace std;

int main(){
    int arr[]={9,3,2,1,4,35,443,0,53,56,785,75,77,34};
    int new_arr[14];
    for(int i=0;i<14;i++){
        new_arr[i]=arr[13-i];
    }
    cout<<"Reverse Array is:"<<endl;
    for(int i=0;i<14;i++){
        cout<<new_arr[i]<<" ";
    }    
}
