#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter starting range:";
    cin>>m;
    cout<<"enter ending range:";
    cin>>n;
    cout<<"printing square from "<<m<<" to "<<n<<endl;
    while(m<=n){
        cout<<m*m<<endl;
        m++;
    }
}