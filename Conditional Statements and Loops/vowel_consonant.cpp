#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter character:";
    cin>> ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<< ch <<" is a vowel";
    }else{
        cout<< ch <<" is a consonant";
    }
    return 0;
}

