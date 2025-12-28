#include<iostream>
using namespace std;

long long sqrt(long long num){
    long long ans=num,low=0,high=num,mid;
    if(num<2){
        return ans;
    }
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid*mid==num){
            ans=mid;
            break;
        }else if(mid*mid>num){
            high=mid-1;
        }else{
            ans=mid;
            low=mid+1;
        }
    }
    cout<<"Square Root is "<<ans;
    return 0;
}
int main(){
    long long num;
    cout<<"Enter the number";
    cin>>num;
    sqrt(num);
}