#include<iostream>
using namespace std;

int main(){
    int row=5,i,j;
    char ch=97;
    //i=rows(upTOdown)
    //j=column(rightTOLeft)
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        ch++;
        cout<<endl;
    }
}