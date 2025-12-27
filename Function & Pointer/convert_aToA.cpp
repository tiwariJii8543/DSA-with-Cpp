#include<iostream>
using namespace std;

void convert(char ch){
    if(ch>64 && ch<91){
        ch=ch+32;
        cout<<ch;
        return;
    }

    if(ch>96 && ch<123){
        ch=ch-32;
        cout<<ch;
        return;
    }  
}

int main(){
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    convert(ch);
}