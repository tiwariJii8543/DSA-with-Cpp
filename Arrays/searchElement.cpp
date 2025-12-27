#include<iostream>
using namespace std;

int main(){
    int arr[]={9,3,2,1,4,35,443,0,53,56,785,75,77,34};
    int target;
    cout<<"enter the element to find: ";
    cin>>target;
    for(int i=0;i<14;i++){
        if(target==arr[i]){
            cout<<"element found at index: "<<i;
            return 0;
        }
    }
    cout<<"element not found in array";    
}
