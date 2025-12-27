#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,next,n;
    cout<<"enter the value on n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        next=a+b;
        a=b;
        b=next;
    }

}