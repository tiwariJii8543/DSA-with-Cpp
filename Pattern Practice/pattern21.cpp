#include<iostream>
using namespace std;

int main(){
    int row=5,i,j;
    for(i=0;i<row;i++){
        char ch=97;
        ch=ch+i;
        for(j=0;j<=i;j++){
            cout<<ch<<" ";
            ch--;
        }
        for(j=1;j<=row-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}