#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n/2+1;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=n+1-2*i;j>0;j--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n/2;i++){
        for(j=n/2+1-i;j>0;j--){
            cout<<"*";
        }
        for(j=1;j<=(2*i);j++){
            cout<<" ";
        }
        for(j=n/2+1-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}