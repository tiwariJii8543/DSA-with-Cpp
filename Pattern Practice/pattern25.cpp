#include<iostream>
using namespace std;

int main(){
    int row=5,i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(j=1;j<=row-i+1;j++){
            cout<<j;
        }
        for(j=row-i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}