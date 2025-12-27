#include<iostream>
using namespace std;

int main(){
    int row=5,i,j;
    //i=rows(upTOdown)
    //j=column(rightTOLeft)

    // 1st logic
    for(int i=0;i<row;i++){
        for(int j=1;j<=(row-i);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // 2nd logic
    for(int i=0;i<row;i++){
        for(int j=(row-i);j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}