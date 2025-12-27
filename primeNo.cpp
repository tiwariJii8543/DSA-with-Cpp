#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter the num:";
    cin>>num;
    if(num<2){
            cout<<num<<" is not prime."<<endl;
    }else{
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                cout<<num<<" is not prime.";
                return 0;
            }
        }
        cout<<num<<" is prime.";
    }
   
        
        
}
