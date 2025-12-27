#include<iostream>
using namespace std;

int main(){
    int row=5,i,j,x=1;
    //i=rows(upTOdown)
    //j=column(rightTOLeft)
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<x<<" ";
            x=x+1;
        }
        
        cout<<endl;
    }
}