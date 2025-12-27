#include<iostream>
using namespace std;

int main(){
    int sum=0,m,n;
    cout<<"enter starting range:";
    cin>>m;
    cout<<"enter the ending range:";
    cin>>n;
    cout<<"summation of numbers between "<<m<<" and "<<n<<" is:"<<endl;
    for(int i=m;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}