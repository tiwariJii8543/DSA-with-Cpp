#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    //printing address of first element
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    //printing address of all element
    for(int i=0;i<5;i++){
        cout<<ptr+i<<endl;
    }
    //printing value using pointer
    for(int i=0;i<5;i++){
        cout<<*ptr+i<<endl;
    }
}