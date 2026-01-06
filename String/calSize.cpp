#include<iostream>
using namespace std;

int main(){
    // using string class
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    // calculating size of string without size func....
    int size=0;
    while(str[size]!='\0'){
        size++;
    }
    cout<<"size of string is : "<<size;
}