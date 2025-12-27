#include<iostream>
using namespace std;

int main(){
    int i=1, num;
    cout<<" enter the Num:";
    cin>>num;
    cout<<"multiplication Table of "<<num<<" is :";
    while(i<=10){
        cout<<num*i<<endl;
        i++;
    }
}