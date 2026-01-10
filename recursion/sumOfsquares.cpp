#include<iostream>
using namespace std;

int result(int n){
    if(n==0){
        return 1;
    }
    return (n-1)*result(n-1);
}
int main(){
    int n;
    cout<<"Give n: ";
    cin>>n;
    int ans=result(n);
    cout<<ans;
}