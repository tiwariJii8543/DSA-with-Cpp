#include<iostream>
using namespace std;

long long factorial(int a){
    long long fact=1;
    int i=1;
    while(i<=a){
        fact=fact*i;
        i++;
    }
    return fact;
}

int trailingZero(int num){
    long long fact=factorial(num);
    long long a=fact;
    int count=0;
    while(a>0){
        int rem=a%10;;
        if(rem!=0){
            break;
        }else{
            count+=1;
        }
        a=a/10;
    }
    cout<<"factorial of "<<num<<" have "<<count<<" zero.";
    return count;

}

int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    trailingZero(num);
}