#include<iostream>
using namespace std;

int print(int n){
    if(n==0){
        return n;
    }
    cout<<n<<" ";
    return print(n-1);
}
int main(){
    int n;
    cout<<"Give n: ";
    cin>>n;
    print(n);
}