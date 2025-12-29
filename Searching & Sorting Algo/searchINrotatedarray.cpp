#include<iostream>
using namespace std;

// searching element in a rotated sorted array.......

int min(int arr[],int n){
    int low=0,high=n-1,mid,key,ans=-1;
    cout<<"enter the element to search:";
    cin>>key;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            break;
            
        }else if(arr[low]<=arr[mid]){
            // serching in left side of mid...
            if(arr[low]<=key && key<=arr[mid]){
                high=mid-1;
            } // searching right side of array...
            else{
                low=mid+1;
            }
        }else{
            if(key>=arr[mid] && key<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
            
        }
    }
    return ans;
}
int main(){
    int n=8,arr[100]={8,9,2,3,4,5,6,7};
    int index=min(arr,n);
    if(index!=-1){
        cout<<"elemnt found at index: "<<index;
    }else{
        cout<<"element not in array";
    }
}