#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter starting range:"<<endl;
    cin>>m;
    cout<<"enter ending range:"<<endl;
    cin>>n;
    cout<<"printing even numbers between "<<m<<" and "<<n<<"is"<<endl;
    while(m<=n){
        if(m%2==0){
        cout<<m<<endl;
        }
        m++;
    }
    return 0;
}