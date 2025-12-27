#include<iostream>
using namespace std;

int SearchOccurence(int arr[],int n){
    int low=0,high=n-1,mid,key,First=-1,Last=-1;
    cout<<"enter the element to search: ";
    cin>>key;
    
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            high=mid-1;
            First=mid;
        } else if (arr[mid] < key) {
            low = mid+1;
        }else{
            high=mid-1;
        }
    }
    low=0,high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            low=mid+1;
            Last=mid;
        } else if (arr[mid] > key) {
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    if(First==-1&&Last==-1){
        cout<<"Element not in Array";
    }else{
        cout<<"First and Last Ocuurence Found at index : "<<First<<" & "<<Last;
    }
}
    

int main(){
    int n,arr[100];
    cout<<"enter the size of array;";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SearchOccurence(arr,n);
}
