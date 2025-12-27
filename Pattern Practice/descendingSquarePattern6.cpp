#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:";
    cin>>row;
    //i=rows(upTOdown)
    //j=column(rightTOLeft)
    for(int i=1;i<=row;i++){
        for(int j=row;j>0;j--){
            cout<<j*j<<" ";

        }
        cout<<endl;
    }
}