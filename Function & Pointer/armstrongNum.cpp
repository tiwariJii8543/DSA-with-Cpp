#include<iostream>
using namespace std;

int countDigit(int a){
    int count=0;
    for(int i=a;a>0;i--){
        int rem=a%10;
        a=(a-rem)/10;
        count+=1;
    }
    return count;
}

void armstrong(int num){
    int a=num;
    int pow=countDigit(a);
    int sum=0;
    while(a>0){
        int result=1;
        int rem=a%10;
        a=(a-rem)/10;
        for(int i=0;i<pow;i++){
            result=result*rem;
        }
        sum=sum+result;
    }

    if(sum==num){
        cout<<num<<" is armstrong number.";
    }else{
        cout<<num<<" is not armstrong number.";
    }

}

int main(){
    int num;
    cout<<"enter the number to check armstrong:";
    cin>>num;
    armstrong(num);
}