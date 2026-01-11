#include<iostream>
using namespace std;

int countVowel(string str,int idx,int total){
    if(idx==str.size()){
        return total;
    }
    if(str[idx]=='a' || str[idx]=='e' || str[idx]=='i' || str[idx]=='o' || str[idx]=='u'){
        total+=1;    
    }
    return countVowel(str,idx+1,total);
}
int main(){
    string str;
    int idx=0,total=0;
    cout<<"enter a string: ";
    cin>>str;
    total=countVowel(str,idx,total);
    cout<<"Total vowel is/are: "<<total;
}