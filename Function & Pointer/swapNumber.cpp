#include<iostream>
using namespace std;

//used '&' for pass by refrence value:
void swap(int &num1, int &num2){
    cout<<"Numbers before swapping: "<<num1<<" & "<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"Numbers after swapping: "<<num1<<" & "<<num2<<endl;
    
}

int main(){
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    swap(a,b);
}