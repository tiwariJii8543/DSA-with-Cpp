#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter starting range:";
    cin>>m;
    cout<<"enter the ending range:";
    cin>>n;
    cout<<"printing numbers in Reverse order:"<<endl;
    while(m<=n){
        cout<<n<<endl;
        n--;
    }
}