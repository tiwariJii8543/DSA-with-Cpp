#include<iostream>
using namespace std;

int main(){
    int row;
    char ch=97;
    cout<<"enter the number of rows:";
    cin>>row;
    //i=rows(upTOdown)
    //j=column(rightTOLeft)
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<ch<<" ";
        }
        ch=ch+1;
        cout<<endl;
    }
    // char ch;
    // ch=97;
    // cout<<ch;
}