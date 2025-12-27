#include<iostream>
using namespace std;

int main(){
    int arr[]={9,3,2,1,4,35,443,0,53,56,785,75,77,34};
    int min=arr[0],max=0;
    for(int i=0;i<14;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(int i=0;i<14;i++){
        if(max<arr[i]){
            max=arr[i];
        }   
    }
    cout<<"minimum element is: "<<min<<endl;
    cout<<"maximum element is: "<<max;
}
