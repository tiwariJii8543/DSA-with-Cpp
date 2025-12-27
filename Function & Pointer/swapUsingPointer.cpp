#include<iostream>
using namespace std;

int swap(int*ptr1,int*ptr2){
    int temp=*ptr1;
    ptr1=ptr2;
    *ptr2=temp;
}
int main(){
    int a=5,b=10;
    swap(a,b);
    cout<<a<<","<<b;
}