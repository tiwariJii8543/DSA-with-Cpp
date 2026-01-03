#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={2,3,4,5,6,78,34,12,43,21,11,67};
    int target;
    cout<<"enter the element to search:";
    cin>>target;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if(arr[i][j]==target){
                cout<<"found";
                return 1;
            }
        }
    }
    cout<<"not found";
}