#include<iostream>
using namespace std;

int main(){
    // using string class
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    // reverse string using two pointer approach....
    int low=0,high=str.size()-1;
    while(low<=high){
        if(str[low]==str[high]){
            low++;
            high--;
        }else{
            cout<<"Not Pallindrom!!";
            return 0;
        }
        
    }
    cout<<"string is Pallindrom ";
}