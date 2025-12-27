#include<iostream>
using namespace std;

int main(){
    int row=5,i,j;
    
    //i=rows(upTOdown)
    //j=column(rightTOLeft)
    for(int i=1;i<=row;i++){
        char ch=97;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}