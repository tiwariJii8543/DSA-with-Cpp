#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"grade A+";
        }
    else if(marks>=80 && marks<=89){
        cout<<"grade A";
        }
    else if(marks>=70 && marks<=79){
        cout<<"grade B";
        }
    else if(marks>=60 && marks<=69){
        cout<<"grade C";
        }
    else if(marks>=50 && marks<=59){
        cout<<"grade D";
    }
    return 0;
}