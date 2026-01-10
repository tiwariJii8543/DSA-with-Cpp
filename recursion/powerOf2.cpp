#include<iostream>
using namespace std;

int result(int n){
    int num=2;
    if(n==0){
        return 1;
    }
    return num*result(n-1);
}
int main(){
    int n;
    cout<<"Give n: ";
    cin>>n;
    int ans=result(n);
    cout<<ans;
}