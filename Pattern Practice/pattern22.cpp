#include<iostream>
using namespace std;

int main(){
    int row=5,i,j;
    for(i=0;i<row;i++){
        char ch=97;
        for(j=0;j<row-i;j++){
            cout<<ch<<" ";
            ch++;
        }
        for(j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}