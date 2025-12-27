#include<iostream>
using namespace std;

int main(){
    int pow,num,i=1,result=1;
    cout<<"enter the number:";
    cin>>num;
    cout<<"enter the power";
    cin>>pow;
    while(i<=pow){
        result=result*num;
        i++;
    }
    cout<<result;

}